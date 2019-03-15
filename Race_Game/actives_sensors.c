////activos///
void valida_active_PFD(int *carril)
{
	int i,j,b=1;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[16+i][j+2*(*carril)+5]=='#' || pista_new[16+i][j+2*(*carril)+5]=='*')b=0;
	}	
	if(b==1)paint_sensor_derecho_frontal();
}
void valida_active_PFI(int *carril)
{
	int i,j,b=1;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[16+i][j+2*(*carril)-5]=='#' || pista_new[16+i][j+2*(*carril)+5]=='*')b=0;
	}	
	if(b==1)paint_sensor_izquierdo_Frontal();
}
void valida_active_PTI(int *carril)
{
	int i,j,b=1;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[21+i][j+2*(*carril)-6]=='#' || pista_new[21+i][j+2*(*carril)-6]=='*')b=0;
	}
	if(b==1)paint_sensor_izquierdo();
}
void valida_active_PTD(int *carril)
{
	int i,j,b=1;
	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	{
		if(pista_new[21+i][j+2*(*carril)+6]=='#' || pista_new[21+i][j+2*(*carril)+6]=='*')b=0; 
	}
	if(b==1)paint_sensor_derecho();
}
