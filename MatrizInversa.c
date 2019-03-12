#include<stdio.h>


int N; //variable global para determinar el tamaño de las matrices y vectores que se reciben como parametros
void printM(double MA[N][2*N], double S[N]); // funcion para imprimir la matriz inversa y sus soluciones al vector dado 
int convertTo1(double MA[N][2*N], int row, int column); // funcion que convierte a 1 los valores necesarios de las matrices 00,11,22,33,44 etc
void sumRow(double MA[N][2*N], int row, int column, int rowTarget);//función que realiza la suma de de dos filas, recibe indice de dos filas y rowTarget es la fila  donde se guardará el resultado
int multiplyRow(double MA[N][2*N], int rowTarget, double value);//funcion para multiplicar una fila por un coeficiente
void fillMatrix(double MA[N][2*N], double V[N]); // para llenar los valores de una matriz junto con una matriz identidad
void multiplyByVector(double MA[N][2*N], double V[N], double S[N]); //para multiplicar por el vector de coeficientes
void quickChange(double MA[N][2*N], double V[N]);


int main()
{
	
	int i, j, row = 0, column = 0; //contadores e indices para los 1 de las matrices
	printf("Introduce the size of the matrix \n"); //introducir el tamaño de la matriz a resolver
	scanf("%d", &N);
	
	double MA[N][2*N]; //declaracion de matriz pero aumentada para la identidad
	double V[N];  //vector de coeficientes independientes
	double S[N]; //vector para las soluciones del sistema de ecuaciones
	fillMatrix(MA, V);	//Para que el usuario llene la matriz :) 
	
	for(i=0; i < N; i++)
	{
		S[i] = 0; //para inicializar los valores del vector de solucion  
		if(convertTo1(MA, row, column) == 0) //validacion para no exista division entre 0 y ademas convierta a 1 el coeficiente principal  
		{
			printf("Math Error ");
			return 1; //retorna 1 debido a que los renglones de una matriz se hicieron 0
			
		}
		for(j = 0; j < N; j++)
		{
			if(i != j)//validacion para que puede sumar las filas correspondientes 
			{	
				if(multiplyRow(MA, i, - MA[j][i]) == 1)sumRow(MA, i, j, j); //validacion para que no se multiplique por 0 una fila ademas de multiplicar por numero para sumarse 
				convertTo1(MA, row, column);	//volver a convertir a 1 el coefeiciente de la fila ya que las matrices son parametros por referencia 
			}
			
		}
		row++;
		column++;//contadores para controlar el coeficiente para hacer 1 y sumar con las demas
	}
	multiplyByVector(MA, V, S); //multiplicar la matriz inversa por el vector y guardar soluciones
	printM(MA, S); //imprimir resultados
	
	return 0;
}
void quickChange(double MA[N][2*N], double V[N])
{
	//en proceso


}
void multiplyByVector(double MA[N][2*N], double V[N], double S[N])
{
	int i, j, k = 0, l = 0; //contadores
	
	for(i=0; i<N; i++) 
	{
		for(j=N; j<2*N; j++)
		{
			S[k] = S[k] + MA[i][j] * V[l]; //multipliacion de matriz por vector
			l++;	
		}
		k++;
		l = 0;
	}
}
void fillMatrix(double MA[N][2*N], double V[N])
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
			scanf("%lf", &V[k]);//se leen los valores para el vector de terminos independientes 
			k++;
		}
	}
	for(i=0; i<N; i++)	
	for(j=N; j<2*N; j++)
	{
		if(i + N == j)MA[i][j] = 1; //se llena la otra mitad de la matriz, se llenan con la matriz identidad
		else MA[i][j] = 0;
	}
}
int convertTo1(double MA[N][N+N], int row, int column)
{
	
	int i;
	double divisor = MA[row][column];
	
	if(divisor == 0)return 0; //si el divisor es 0 hay error 
	
	column = 0;
	for(i = 0; i < 2 * N; i++)
	{
		MA[row][column] = MA[row][column] / divisor; //dividir todo un renglon para lograr el 1 en la fila 
		column++;
	}	
	return 1;
	
}
void printM(double MA[N][N+N], double S[N])
{
	int i, j;
	system("cls");
	printf("The inverse matrix is = \n"); //imprimir la matriz inversa 
	for(i=0; i<N; i++)
	{
		for(j=N; j<2*N; j++)
		{	
			if(MA[i][j]== -0)MA[i][j] = 0; //para que no se encuentren 0's negativos
			printf("%+.6f ", MA[i][j]);
		
		}
		printf("\n\r");
	}
	printf("\n\r");
	printf("The solutions are \n");
	for(i=0; i<N; i++)
	{
		printf("%c = %+f", i + 65, S[i]);
		printf("\n\r");
	}
}
void sumRow(double MA[N][N + N], int row, int row2, int rowTarget)
{
	int i;
	for(i = 0; i< 2*N; i++)MA[rowTarget][i] = MA[row][i] + MA[row2][i]; //sumar filas 
	
}
int multiplyRow(double MA[N][N+N], int rowTarget, double value)
{
	int i;
	if(value == 0)return 0; //evitar multiplicar todo un renglon por 0
	for(i=0; i<2*N; i++)MA[rowTarget][i] = value * MA[rowTarget][i]; //multiplicar toda la fila por un valor
	return 1;
}
