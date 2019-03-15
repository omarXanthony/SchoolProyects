#include"sensors_Car.c"

Sas DEV[LEN_SAS] = {0};
FILE *fptr=NULL; //apuntador tipo file
BYTE (*getDato[13])();
void printIP(unsigned long int ip)
{
	printf("%d.%d.%d.%d", (BYTE)(ip), (BYTE)(ip>>8), (BYTE)(ip>>16), (BYTE)(ip>>24));
}
void imprime(Sas *dev)
{
	gotoxy(40,5);printf("  ");
	gotoxy(40,5);printf("ID:\t\t\t%llu\n",(int)dev->id);
	gotoxy(40,6);printf("Tipo:\t\t\t%d\n",(int)dev->tipo);
	gotoxy(40,7);printf("Descripcion:\t\t%d\n",dev->descripcion);
	gotoxy(40,8);printf("Instalacion:\t\t%ld\n",dev->instalacion);
	gotoxy(40,9);printf("ParametrosMax:\t\t%.f\n",dev->param.datamax);
	gotoxy(40,10);printf("ParametrosMin:\t\t%.f\n",dev->param.datamin);
	gotoxy(40,11);printf("IP:\t\t\t");
	gotoxy(40,12);printIP(dev->direccion.ip);
	gotoxy(40,13);printf("Server1:\t\t");
	gotoxy(40,14);printIP(dev->direccion.server1);
	gotoxy(40,15);printf("Server2:\t\t");
	gotoxy(40,16);printIP(dev->direccion.server2);
	gotoxy(40,17);printf("Status:\t\t\t%d\n",(int)dev->status);
	gotoxy(40,18);printf("Key:\t\t\t%c%c%c\n",dev->key[0],dev->key[1],dev->key[2]);
	gotoxy(40,19);printf("Dato\t\t\t%.2f\n",dev->dato);
	gotoxy(40,20);printf("Promedio\t\t%.2f\n",dev->promedio);
	gotoxy(40,21);printf("Tultimalectura\t\t%lo\n",dev->tultimalectura);		
}

int inicializa_funciones()
{
		getDato[12]= &Freno;	
		getDato[11]= &Direccion;
 		getDato[10]= &ON_OFF;	
 		getDato[9]= &sensor_freno;	
 		getDato[8]= &acelerador;	
 		getDato[7]= &sensor_Velocidad;	
 		getDato[6]= &sensor_Nivel_bateria;	
 		getDato[5]= &sensorPLI;	
 		getDato[4]= &sensorPLD;	
 		getDato[3]= &sensorPTI;	
 		getDato[2]= &sensorPTD;	
	 	getDato[1]= &sensorPFI;
 		getDato[0]= &sensorPFD;
 		
 	return 0;
}
int llena_archivo()
{
	int i;
	
	fptr=fopen("Sensores.txt","rb");//funcion para crear el archivo
	
	if(fptr==NULL)
	{
		fptr=fopen("Sensores.txt","wb"); //crear archivo obrirlo en modo escritura
		
		if(fptr==NULL)
		{
			return 1; //Medida de seguridad por si no se crea el archivo
		}
		else for(i=0;i<LEN_SAS;i++)fwrite(&DEV[i],sizeof(Sas),1,fptr); //empieza a llenar el archivo
		
	}
	fclose(fptr);
	return 0;
}
int lee_archivo(Sas DEV[LEN_SAS])
{
	int i;
	
	fptr=fopen("Sensores.txt","rb"); //abrir en modo lectura
	
	for(i=0;i<LEN_SAS;i++)
	{
		fread(&DEV[i],sizeof(Sas),1,fptr); //leer del archivo
	}
	fclose(fptr);
}
/*BYTE init(Sas *dev, BYTE star, BYTE end)
{
	//Sensor de proximidad frontal Derecho (PFD) 
	dev->id 		= 183627;
 	dev->tipo 		  	= 0;
 	dev->descripcion 	= 1;
 	dev->instalacion 	= 121018;
 	dev->param.datamax 	= 6;
 	dev->param.datamin 	= 0;
 	dev->direccion.ip 			= SETIP(192,168,105,210);
 	dev->direccion.port	 	 	= 37843;
 	dev->direccion.server1		= SETIP(192,168,107,244);
 	dev->direccion.server2  	= SETIP(192,168,101,104);
 	dev->status		  	= 1;
 	dev->key[0]		  	= 'k';
 	dev->key[1]		  	= 'e';
 	dev->key[2]		  	= 'y';
 	dev->dato			  = 0;	
 	dev->promedio       = 0;
 	dev->tultimalectura = 0;
 	dev->pos.x = 3;
 	dev->pos.y = 0;
 	
 	//Sensor de proximidad frontal Izquierdo (PFI)
 	dev[1].id 		= 222718;
 	dev[1].tipo 		  	= 0;
 	dev[1].descripcion 	= 1;
 	dev[1].instalacion 	= 131018;
 	dev[1].param.datamax 	= 6;
 	dev[1].param.datamin 	= 0;
 	dev[1].direccion.ip 			= SETIP(192,168,101,102);
 	dev[1].direccion.port	 	 	= 92536;
 	dev[1].direccion.server1		= SETIP(192,168,103,219);
 	dev[1].direccion.server2  	= SETIP(253,162,182,222);
 	dev[1].status		  	= 1;
 	dev[1].key[0]		  	= 'k';
 	dev[1].key[1]		  	= 'e';
 	dev[1].key[2]		  	= 'y';
 	dev[1].dato			  = 0;	
 	dev[1].promedio       = 0;
 	dev[1].tultimalectura = 0;
 	dev[1].pos.x = 0;
 	dev[1].pos.y = 0;
 	
 	//Sensor de Proximidad trasero Derecho (PTD)
 	
 	dev[2].id 		= 336371;
 	dev[2].tipo 		  	= 0;
 	dev[2].descripcion 	= 1;
 	dev[2].instalacion 	= 141018;
 	dev[2].param.datamax 	= 6;
 	dev[2].param.datamin 	= 0;
 	dev[2].direccion.ip 			= SETIP(192,168,103,104);
 	dev[2].direccion.port	 	 	= 12345;
 	dev[2].direccion.server1		= SETIP(192,168,1,2);
 	dev[2].direccion.server2  	= SETIP(172,123,123,172);
 	dev[2].status		  	= 1;
 	dev[2].key[0]		  	= 'k';
 	dev[2].key[1]		  	= 'e';
 	dev[2].key[2]		  	= 'y';
 	dev[2].dato			  = 0;	
 	dev[2].promedio       = 0;
 	dev[2].tultimalectura = 0;
 	dev[2].pos.x = 3;
 	dev[2].pos.y = 3;
 	
 	//Sensor de Proximidad trasero Izquierdo (PTI) 
 	dev[3].id 		= 376261;
 	dev[3].tipo 		  	= 0;
 	dev[3].descripcion 	= 1;
 	dev[3].instalacion 	= 151018;
 	dev[3].param.datamax 	= 6;
 	dev[3].param.datamin 	= 0;
 	dev[3].direccion.ip 			= SETIP(192,168,105,106);
 	dev[3].direccion.port	 	 	= 27182;
 	dev[3].direccion.server1		= SETIP(192,168,176,218);
 	dev[3].direccion.server2  	= SETIP(10,10,10,10);
 	dev[3].status		  	= 1;
 	dev[3].key[0]		  	= 'k';
 	dev[3].key[1]		  	= 'e';
 	dev[3].key[2]		  	= 'y';
 	dev[3].dato			  = 0;	
 	dev[3].promedio       = 0;
 	dev[3].tultimalectura = 0;
 	dev[3].pos.x = 0;
 	dev[3].pos.y = 4;
 	
 	//Sensor de Proximidad lateral Derecho (PLD) 
 	dev[4].id 		= 547830;
 	dev[4].tipo 		  	= 0;
 	dev[4].descripcion 	= 1;
 	dev[4].instalacion 	= 121018;
 	dev[4].param.datamax 	= 6;
 	dev[4].param.datamin 	= 0;
 	dev[4].direccion.ip 			= SETIP(192,168,107,108);
 	dev[4].direccion.port	 	 	= 12345;
 	dev[4].direccion.server1		= SETIP(192,168,1,2);
 	dev[4].direccion.server2  	= SETIP(10,10,10,10);
 	dev[4].status		  	= 1;
 	dev[4].key[0]		  	= 'k';
 	dev[4].key[1]		  	= 'e';
 	dev[4].key[2]		  	= 'y';
 	dev[4].dato			  = 0;	
 	dev[4].promedio       = 0;
 	dev[4].tultimalectura = 0;
 	dev[4].pos.x = 3;
 	dev[4].pos.y = 2;
 	
 	//Sensor de Proximidad lateral Izquierdo (PLI)
 	dev[5].id 		= 647839;
 	dev[5].tipo 		  	= 0;
 	dev[5].descripcion 	= 1;
 	dev[5].instalacion 	= 121018;
 	dev[5].param.datamax 	= 6;
 	dev[5].param.datamin 	= 0;
 	dev[5].direccion.ip 			= SETIP(192,168,109,110);
 	dev[5].direccion.port	 	 	= 12345;
 	dev[5].direccion.server1		= SETIP(192,168,1,2);
 	dev[5].direccion.server2  	= SETIP(10,10,10,10);
 	dev[5].status		  	= 1;
 	dev[5].key[0]		  	= 'k';
 	dev[5].key[1]		  	= 'e';
 	dev[5].key[2]		  	= 'y';
 	dev[5].dato			  = 0;	
 	dev[5].promedio       = 0;
 	dev[5].tultimalectura = 0;
	dev[5].pos.x = 0;
 	dev[5].pos.y = 2;
 	
 	
 	//Nivel de batería
 	dev[6].id 		= 735627;
 	dev[6].tipo 		  	= 0;
 	dev[6].descripcion 	= 1;
 	dev[6].instalacion 	= 121018;
 	dev[6].param.datamax 	= 6;
 	dev[6].param.datamin 	= 0;
 	dev[6].direccion.ip 			= SETIP(192,168,110,111);
 	dev[6].direccion.port	 	 	= 12345;
 	dev[6].direccion.server1		= SETIP(192,168,1,2);
 	dev[6].direccion.server2  	= SETIP(10,10,10,10);
 	dev[6].status		  	= 1;
 	dev[6].key[0]		  	= 'k';
 	dev[6].key[1]		  	= 'e';
 	dev[6].key[2]		  	= 'y';
 	dev[6].dato			  = 100;	
 	dev[6].promedio       = 0;
 	dev[6].tultimalectura = 0;
	dev[6].pos.x = 6;
 	dev[6].pos.y = 0;
 	
 	//Velocidad 
 	dev[7].id 		= 8837829;
 	dev[7].tipo 		  	= 0;
 	dev[7].descripcion 	= 1;
 	dev[7].instalacion 	= 121018;
 	dev[7].param.datamax 	= 6;
 	dev[7].param.datamin 	= 0;
 	dev[7].direccion.ip 			= SETIP(192,168,112,113);
 	dev[7].direccion.port	 	 	= 12345;
 	dev[7].direccion.server1		= SETIP(192,168,1,2);
 	dev[7].direccion.server2  	= SETIP(10,10,10,10);
 	dev[7].status		  	= 1;
 	dev[7].key[0]		  	= 'k';
 	dev[7].key[1]		  	= 'e';
 	dev[7].key[2]		  	= 'y';
 	dev[7].dato			  = 0;	
 	dev[7].promedio       = 0;
 	dev[7].tultimalectura = 0;
	dev[8].pos.x = 8;
 	dev[8].pos.y = 0;
 	
 	//Acelerador
 	dev[8].id 		= 9783920;
 	dev[8].tipo 		  	= 1;
 	dev[8].descripcion 	= 1;
 	dev[8].instalacion 	= 121018;
 	dev[8].param.datamax 	= 6;
 	dev[8].param.datamin 	= 0;
 	dev[8].direccion.ip 			= SETIP(192,168,120,122);
 	dev[8].direccion.port	 	 	= 12345;
 	dev[8].direccion.server1		= SETIP(192,168,1,2);
 	dev[8].direccion.server2  	= SETIP(10,10,10,10);
 	dev[8].status		  	= 1;
 	dev[8].key[0]		  	= 'k';
 	dev[8].key[1]		  	= 'e';
 	dev[8].key[2]		  	= 'y';
 	dev[8].dato			  = 0;	
 	dev[8].promedio       = 0;
 	dev[8].tultimalectura = 0;
	dev[8].pos.x = 8;
 	dev[8].pos.y = 0;
 	
 	//Freno
 	dev[9].id 		= 103782;
 	dev[9].tipo 		  	= 1;
 	dev[9].descripcion 	= 1;
 	dev[9].instalacion 	= 121018;
 	dev[9].param.datamax 	= 6;
 	dev[9].param.datamin 	= 0;
 	dev[9].direccion.ip 			= SETIP(192,168,244,155);
 	dev[9].direccion.port	 	 	= 12345;
 	dev[9].direccion.server1		= SETIP(192,168,1,2);
 	dev[9].direccion.server2  	= SETIP(10,10,10,10);
 	dev[9].status		  	= 1;
 	dev[9].key[0]		  	= 'k';
 	dev[9].key[1]		  	= 'e';
 	dev[9].key[2]		  	= 'y';
 	dev[9].dato			  = 0;	
 	dev[9].promedio       = 0;
 	dev[9].tultimalectura = 0;
 	
 	
 	//Dirección 
 	dev[10].id 		= 113892;
 	dev[10].tipo 		  	= 1;
 	dev[10].descripcion 	= 1;
 	dev[10].instalacion 	= 121018;
 	dev[10].param.datamax 	= 6;
 	dev[10].param.datamin 	= 0;
 	dev[10].direccion.ip 			= SETIP(192,168,102,165);
 	dev[10].direccion.port	 	 	= 12345;
 	dev[10].direccion.server1		= SETIP(192,168,1,2);
 	dev[10].direccion.server2  	= SETIP(10,10,10,10);
 	dev[10].status		  	= 1;
 	dev[10].key[0]		  	= 'k';
 	dev[10].key[1]		  	= 'e';
 	dev[10].key[2]		  	= 'y';
 	dev[10].dato			  = 0;	
 	dev[10].promedio       = 0;
 	dev[10].tultimalectura = 0;
 	getDato[10]= &Direccion;	
	dev[10].pos.x = 9;
 	dev[10].pos.y = 0;
 	
 	//Encender/ Apagar
 	dev[11].id 		= 127892;
 	dev[11].tipo 		  	= 1;
 	dev[11].descripcion 	= 1;
 	dev[11].instalacion 	= 121018;
 	dev[11].param.datamax 	= 6;
 	dev[11].param.datamin 	= 0;
 	dev[11].direccion.ip 			= SETIP(192,168,105,111);
 	dev[11].direccion.port	 	 	= 12345;
 	dev[11].direccion.server1		= SETIP(192,168,1,2);
 	dev[11].direccion.server2  	= SETIP(10,10,10,10);
 	dev[11].status		  	= 1;
 	dev[11].key[0]		  	= 'k';
 	dev[11].key[1]		  	= 'e';
 	dev[11].key[2]		  	= 'y';
 	dev[11].dato			  = 0;	
 	dev[11].promedio       = 0;
 	dev[11].tultimalectura = 0;
	dev[11].pos.x = 5;
 	dev[11].pos.y = 0;
 	
 	//Freno actuador
 	dev[12].id 		= 137829;
 	dev[12].tipo 		  	= 0;
 	dev[12].descripcion 	= 1;
 	dev[12].instalacion 	= 121018;
 	dev[12].param.datamax 	= 6;
 	dev[12].param.datamin 	= 0;
 	dev[12].direccion.ip 			= SETIP(192,168,104,117);
 	dev[12].direccion.port	 	 	= 12345;
 	dev[12].direccion.server1		= SETIP(192,168,1,2);
 	dev[12].direccion.server2  	= SETIP(10,10,10,10);
 	dev[12].status		  	= 1;
 	dev[12].key[0]		  	= 'k';
 	dev[12].key[1]		  	= 'e';
 	dev[12].key[2]		  	= 'y';
 	dev[12].dato			  = 0;	
 	dev[12].promedio       = 0;
 	dev[12].tultimalectura = 0;
	dev[12].pos.x = 9;
 	dev[12].pos.y = 0; 	
}
*/

