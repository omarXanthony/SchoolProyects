void acelerador_screen()
{
		gotoxy(40,8);printf("[30]");
		gotoxy(50,6);printf("[60]");
		gotoxy(60,4);printf("[90]");
		gotoxy(70,6);printf("[120]");
		gotoxy(80,8);printf("[150]");
}
void aguja(int speed)
{
	
	remove_agujas();
	switch(speed)
	{
		case 30:	gotoxy(40,9);printf("<-->");break;
		case 60:	gotoxy(50,7);printf("<-->");break;
		case 90:	gotoxy(60,5);printf("<-->");break;
		case 120:	gotoxy(70,7);printf("<--->");break;
		case 150:	gotoxy(80,9);printf("<--->");break;
	}
}
void remove_agujas()
{
		gotoxy(40,9);printf("    ");
		gotoxy(50,7);printf("    ");
		gotoxy(60,5);printf("    ");
		gotoxy(70,7);printf("     ");
		gotoxy(80,9);printf("     ");
}
void static_car()
{
	int i,j;
	gotoxy(40,12);
	BYTE car_aux[10][9]=
	{
		{0,0,0,0,3,0,0,0,0},
		{2,2,2,2,3,2,2,2,2},
		{0,0,0,4,4,4,0,0,0},
		{0,0,4,4,0,4,4,0,0},
		{0,0,4,0,0,0,4,0,0},
		{0,0,4,4,0,4,4,0,0},
		{0,0,4,0,0,0,4,0,0},
		{2,2,4,4,4,4,4,2,2},
		{0,0,0,0,3,0,0,0,0},
		{0,0,0,0,3,0,0,0,0}
	};
		
	for(i=0;i<10;i++)
	for(j=0;j<9;j++)
	{
		gotoxy(58+j,12+i);
		
		switch(car_aux[i][j])
		{
			case 0:	printf(" ");break;
			case 4:	printf("I");break;
			case 2:	printf("_");break;
			case 3:	printf("|");break;
		}
	}
}
void paint_sensor_derecho_frontal()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(63+i,8+j);printf("-");
	}
}
void paint_sensor_izquierdo_Frontal()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(56+i,8+j);printf("-");
	}
}
void paint_sensor_izquierdo()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(54+i,14+j);printf("-");
	}
}
void paint_sensor_derecho()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(65+i,14+j);printf("-");
	}
}
void paint_sensor_abajo_derecho()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(63+i,20+j);printf("-");
	}
}
void paint_sensor_abajo_izquierdo()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(56+i,20+j);printf("-");
	}
}
void imprime_sensores()
{

	paint_sensor_derecho_frontal();
	paint_sensor_izquierdo_Frontal();
	paint_sensor_izquierdo();
	paint_sensor_derecho();
	//paint_sensor_abajo_derecho();
	//paint_sensor_abajo_izquierdo();



}
