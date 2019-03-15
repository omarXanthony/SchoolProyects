#include <stdio.h>
#include <string.h>
#include<conio.h>
#include"LibPE.c"
BYTE pista_new [2048][34]={0};
#define BYTE unsigned char 
#define WORD unsigned int
#include"structures.c"
#include"car_moves.c"
#define LEN_KEY 128
#define LEN_SAS 13
#define SETIP(ip1, ip2, ip3, ip4) ((ip4 << 24) | (ip3 << 16) | (ip2 << 8) | ip1)
#include"actives.c"
#include"init_car.c"
#include"Prototypes.c"
#include"medidores.c"
#include "actives_sensors.c"


BYTE init(Sas *dev, BYTE star, BYTE end);
int main()
{
	int i = 0,carril=7,altura=0;
	inicializa_funciones();
	invierte_M();
	acelerador_screen();
	static_car();
	imprime_sensores();

	if(llena_archivo()!=0)
	{
		printf("No se pudo crear el archivo");
		return 1;
	}
	lee_archivo(DEV);
	imprime_pista();
	print_car(&carril,&altura);
	mueve(&carril,&altura);	
	printf("\n\n\n\n\n\n\n");
	fclose(fptr);
	return 0;
}
void mueve(int *carril,int *altura)
{
	uint64 start = 0, now=0, elapsed=0, elapsed_2=0, start_2=0, now_2=0;
	char tecla=0;
	float v=0;
	do{
		now = GetTimeMs64();
		now_2=GetTimeMs64();
		elapsed = now - start;
		elapsed_2 = now_2 - start_2;
		if(elapsed > 16)
		{		
			gotoxy(0,0);
			imprime_pista();
			print_car(carril,altura);
			start = GetTimeMs64();
			tecla=0;
			valida_choque(carril);
		}
		if(elapsed_2> (2400/v))
		{
			now_2=GetTimeMs64();
			start_2 = GetTimeMs64();
			recorre_pista(carril);
			valida_Sensores(carril);
			valida_actives(carril);
			
		}
		if(kbhit())
		{			
			tecla=getch();
			switch(tecla)
			{
				case 77:	mueve_derecha(carril,altura);break;
				case 75:	mueve_izquierda(carril,altura);break;	
				//case 72:	mueve_arriba(carril,altura);break;						
				//case 80:	mueve_abajo(carril,altura);break;
				case 'w':	v+=30;if(v>150)v=150;aguja(v);break;
				case 's':	v-=30;if(v<0)v=0;aguja(v);break;
			}
		}
		
	}while(tecla!=13);
}
void valida_actives(int *carril)
{
	valida_active_PFD(carril);
	valida_active_PFI(carril);
	valida_active_PTI(carril);
	valida_active_PTD(carril);
}
void valida_Sensores(int *carril)
{
	sensorPFD(carril);
	sensorPFI(carril);
	sensorPTI(carril);
	sensorPTD(carril);
}
void valida_choque(int *carril)
{
	int i,j;
	for(i=0;i<6;i++)
	for(j=0;j<5;j++)
	{
		switch(pista_new[i+21][j+2*(*carril)])
		{
			case '#':	exit(0);
						break;
		
			case '*':	exit(0);
						break;
		}	
	}
}
void recorre_pista()
{
	BYTE aux[33],aux2[33];
	int i,b=1,j;
	
	for(i=0;i<2048;i++)
	{
		if(b==1)
		{
			strcpy(aux,pista_new[i]);
			strcpy(pista_new[i],pista_new[2047]);
			b=0;
		}
		else
		{
			strcpy(aux2,pista_new[i]);
			strcpy(pista_new[i],aux);
			strcpy(aux,aux2);
		}
	}
	
}
void imprime_pista()
{
	gotoxy(0,0);
	int i,j;
	
	for(i=0;i<28;i++)
	{
		for(j=0;j<33;j++)
		{
			switch(pista_new[i][j])
			{
				case '=': printf("=");
					      break;
						
				case '.': printf(" ");
						  break;
						
				case '|': printf("|");
						  break;
						
				case '*': printf("*");
						  break;
						
				case '#': printf("#");
						  break;
						  
				case '-': printf("-");
						  break;
						  
				case 'H': printf("H");
							break;
			}
		}
	
	printf("\n\r");
	}
}
void invierte_M()
{
FILE *pista_ptr;
BYTE L[2048][34]={0};
int i,j;
	
	pista_ptr=fopen("pista_completa.txt","rb+");
	
	if(pista_ptr==NULL)
	{
		pista_ptr=fopen("pista_completa.txt","w");
		
			for(i=0;i<2048;i++)
			for(j=0;j<34;j++)fwrite(&pista_new[i][j],sizeof(BYTE),1,pista_ptr);
	}
	else
	{
			for(i=0;i<2048;i++)
			for(j=0;j<34;j++)fread(&pista_new[i][j],sizeof(BYTE),1,pista_ptr);
	}
}

