#include<stdio.h>


int N; 
void printM(double MA[N][N]);  
int convertTo1(double MA[N][N], int row, int column); 
void sumRow(double MA[N][N], int row, int column, int rowTarget); 
int multiplyRow(double MA[N][N], int rowTarget, double value);
void fillMatrix(double MA[N][N], double V[N]); 
double det(double MA[N][N]);
void copyMatrix(double auxM[N][N], double MA[N][N]);
void changeColumn(double auxM[N][N], double V[N], int column);

int main()
{
	int i = 0, j = 65;

	printf("Introduce the size of the matrix \n"); 
	scanf("%d", &N);
	
	double MA[N][N];
	double auxMA[N][N];
	double V[N];
	double DETS[N + 1];  	
	
	fillMatrix(MA, V);	
	system("cls");
	copyMatrix(auxMA, MA);
	
	DETS[0] = det(MA);
	printf("Determinante del sistema = %lf \n", DETS[0]);
	if(DETS[0] == 0)return 1;
	
	for(i = 0; i < N; i++)
	{
		changeColumn(auxMA, V, i);
		DETS[i + 1] = det(auxMA);
		copyMatrix(auxMA, MA);
		printf("Determinante de %c = %lf \n", j, DETS[i + 1]);
		j++;
	}
	j = 65;
	printf("\n\n");
	
	for(i = 0; i < N; i++)
	{
		printf("%c = %lf \n", j, DETS[i+1]/DETS[0]);
		j++;
	}
	

	return 0;
}
double det(double MA[N][N])
{
	
	int i, j, row = 0, column = 0; //contadores e indices para los 1 de las matrices
	double aux = 1;
	double aux2;
	double auxM[N][N];
	
	copyMatrix(auxM, MA);
	
	for(i=0; i < N - 1; i++)
	{		
		for(j = 0; j < N; j++)
		{
			if(i != j && i < j)
			{	
				aux2 = auxM[row][column];
				if(convertTo1(auxM, row, column) == 0)return 0;
				if(multiplyRow(auxM, i, - auxM[j][i]) == 1)sumRow(auxM, i, j, j); 
				convertTo1(auxM, row, column);
				multiplyRow(auxM, i, aux2);
			}
		}
		row++;
		column++;
	}
	
	for(i = 0; i < N; i++)
	for(j = 0; j < N; j++)
	{
		if(i == j)aux = aux * auxM[i][j];
		
	}
	
	return aux;
}
void changeColumn(double auxM[N][N], double V[N], int column)
{
	
	int i, j;
	
	for(i = 0; i < N; i++)
	for(j = 0; j < N; j++)
	{
		if(j == column)auxM[i][j] = V[i];
	
	}
	
}
void copyMatrix(double auxM[N][N], double  MA[N][N])
{
	int i, j;
	
	for(i=0; i < N; i++)
	for(j=0; j < N; j++)
	{
		auxM[i][j] = MA[i][j];
	}
}
void fillMatrix(double MA[N][N], double V[N])
{
	system("cls");
	
	int i, j = 0, k = 0;
	
	printf("Please fill the matrix with \nthe variable coefficients and the independent coefficients \n");
	for(i=0; i<N; i++)printf("%c ", i + 65); //el usuario empieza a llenar la matriz 
	printf("I \n\n");
	
	for(i=0; i<N; i++)	
	for(j=0; j<N + 1; j++) //ciclios para reccorrer la matriz 
	{		
			if(j < N)scanf("%lf", &MA[i][j]);//se leen los valores de las variables 
			if(j == N)
			{
				scanf("%lf", &V[k]);
				k++;
			}
	}
}
int convertTo1(double MA[N][N], int row, int column)
{
	
	int i;
	double divisor = MA[row][column];
	
	if(divisor == 0)return 0; //si el divisor es 0 hay error 
	
	column = 0;
	for(i = 0; i < N; i++)
	{
		MA[row][column] = MA[row][column] / divisor; //dividir todo un renglon para lograr el 1 en la fila 
		column++;
	}	
	return 1;
	
}
void printM(double MA[N][N])
{
	int i, j;
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{	
			if(MA[i][j]== -0)MA[i][j] = 0; //para que no se encuentren 0's negativos
			printf("%+.6f ", MA[i][j]);
		}
		printf("\n\r");
	}
	printf("\n\r");
	
}
void sumRow(double MA[N][N], int row, int row2, int rowTarget)
{
	int i;
	for(i = 0; i< 2*N; i++)MA[rowTarget][i] = MA[row][i] + MA[row2][i]; //sumar filas 
	
}
int multiplyRow(double MA[N][N], int rowTarget, double value)
{
	int i;
	if(value == 0)return 0; //evitar multiplicar todo un renglon por 0
	for(i=0; i<N; i++)MA[rowTarget][i] = value * MA[rowTarget][i]; //multiplicar toda la fila por un valor
	return 1;
}
