///car_movements///

BYTE pos_M[6][5]= 
{
	{0,4,4,4,0},
	{4,4,0,4,4},
	{4,0,0,0,4},
	{4,4,0,4,4},
	{4,0,0,0,4},
	{4,4,4,4,4},
};
void print_car(int *carril,int *altura)
{
	
	int i,j;
	gotoxy(0,0);
	
	for(i=0;i<6;i++)
	for(j=0;j<5;j++)
	{
		gotoxy((*carril)*2+j,21-(*altura)+i);
		
		switch(pos_M[i][j])
		{
			case 0: printf(" ");
					break;
					
			case 4: printf("I ");
					break;				
		}
	}
}
void desprintcar(int *carril,int *altura)
{
	int i,j;
	gotoxy(0,0);
	
	for(i=0;i<6;i++)
	for(j=0;j<5;j++)
	{
		gotoxy((*carril)*2+j,21-(*altura)+i);
		
		switch(pos_M[i][j])
		{
			case 0: printf(" ");
					break;
					
			case 4: printf(" ");
					break;
		}
	
	}

}

void mueve_abajo(int *carril, int *altura)
{
	desprintcar(carril,altura); 
	*altura=*altura-1;
	if(*altura<=0)*altura=0;
	print_car(carril,altura);
}
void mueve_arriba(int *carril, int *altura)
{
	desprintcar(carril,altura); 
	*altura=*altura+1;
	if(*altura>=21)*altura=21;
	print_car(carril,altura);
}
void mueve_izquierda(int *carril, int *altura)
{
	desprintcar(carril,altura); 
	*carril=*carril-1;
	if(*carril<=1)*carril=1;
	print_car(carril,altura);
}
void mueve_derecha(int *carril, int *altura)
{
	desprintcar(carril,altura); 
	*carril=*carril+1;
	if(*carril>=13)*carril=13;
	print_car(carril,altura);
}

