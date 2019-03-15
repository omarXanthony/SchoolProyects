#ifdef WIN32
#include <windows.h>
#else
#include <sys/time.h>
#include <time.h>
#include <termios.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#endif

typedef long long int64; 
typedef unsigned long long uint64;

void sleep_ms(int milliseconds);
void clrscr(void);
uint64 GetTimeMs64();
void gotoxy(int x,int y);
