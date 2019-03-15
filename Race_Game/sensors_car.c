///sensores///
//funciones de cada sensor y actuador

BYTE sensorPFD(int *carril)
{
		
	int i,j,b=0;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[16+i][j+2*(*carril)+5]=='#' || pista_new[16+i][j+2*(*carril)+5]=='*')b=0;
	}	
	if(b==0)paint_sensor_derecho_frontal_active();
	return 0;
}
BYTE sensorPFI(int *carril)
{
	int i,j,b=0;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[16+i][j+2*(*carril)-5]=='#' || pista_new[16+i][j+2*(*carril)-5]=='*')b=0; 
	}
	if(b==0)paint_sensor_izquierdo_Frontal_active();
	return 0;

}
BYTE sensorPTD(int *carril) 
{

	int i,j,b=0;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[21+i][j+2*(*carril)+6]=='#' || pista_new[21+i][j+2*(*carril)+6]=='*')b=0; 
	}
	if(b==0)paint_sensor_derecho_active();
	return 0;

}
BYTE sensorPTI(int *carril)
{
	int i,j,b=0;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[21+i][j+2*(*carril)-6]=='#' || pista_new[21+i][j+2*(*carril)-6]=='*')b=0; 
	}
	if(b==0)paint_sensor_izquierdo_active();
	return 0;

}
BYTE sensorPLD(int *carril)
{
	


	return 0;
}
BYTE sensorPLI(int *carril)
{




	return 0;
}
BYTE sensor_Nivel_bateria(Sas *This)
{
	gotoxy(40,4);printf("                                        ");
	gotoxy(40,4);printf("Nivel de Bateria.",This->dato);

	return 0;
}
BYTE sensor_Velocidad(Sas *This)
{
	gotoxy(40,4);printf("                                        ");
	gotoxy(40,4);printf("Velocidad",This->dato);



	return 0;
}
BYTE sensor_freno(Sas *This)
{
	gotoxy(40,4);printf("                                        ");
	gotoxy(40,4);printf("Freno");

	return 0;
}
BYTE acelerador(Sas *This)
{

	gotoxy(40,4);printf("                                        ");
	gotoxy(40,4);printf("Acelerador",This->dato);

	return 0;


}
BYTE Freno(Sas *This)
{
	gotoxy(40,4);printf("                                        ");
	gotoxy(40,4);printf("Freno",This->dato);

	return 0;

}
BYTE Direccion(Sas *This)
{
	gotoxy(40,4);printf("                                        ");
	gotoxy(40,4);printf("Direccion");

	return 0;
}
BYTE ON_OFF(Sas *This)
{
	gotoxy(40,4);printf("                                        ");

	gotoxy(40,4);printf("Encendido",This->status);

	return 0;

}


