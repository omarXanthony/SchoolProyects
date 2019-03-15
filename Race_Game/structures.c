#ifndef LEN_KEY
#define LEN_KEY 128
#endif
///structures////
typedef struct
{
	float datamax;
	float datamin;
}Param;

typedef struct
{
	unsigned long int ip;
	WORD port;
	unsigned long int server1;
	unsigned long int server2;
}Addr;


typedef struct
{
	WORD x;
	WORD y;
}Coord;


typedef struct
{
	unsigned long long id;
	BYTE tipo;
	WORD descripcion;
	long instalacion;
	Param param;
	Addr direccion;
	BYTE status;
	char key[LEN_KEY];
	float dato;
	float promedio;
	long tultimalectura;
	Coord pos;
} Sas;

typedef struct
{
	int pos_x;
	int pos_y;
}car;


