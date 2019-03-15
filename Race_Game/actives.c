///ilumina_Sensores///
void paint_sensor_derecho_frontal_active()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(63+i,8+j);printf("*");
	}
}
void paint_sensor_izquierdo_Frontal_active()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(56+i,8+j);printf("*");
	}
}
void paint_sensor_izquierdo_active()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(54+i,14+j);printf("*");
	}
}
void paint_sensor_derecho_active()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(65+i,14+j);printf("*");
	}
}
void paint_sensor_abajo_derecho_active()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(63+i,20+j);printf("*");
	}
}
void paint_sensor_abajo_izquierdo_active()
{
	BYTE aux[6][6]={0};
	int i,j;
	
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		gotoxy(56+i,20+j);printf("*");
	}
}

