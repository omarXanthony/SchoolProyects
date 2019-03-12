#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>

void inicializa()
{
int adriver,bmode;
detectgraph(&adriver,&bmode);
initgraph(&adriver,&bmode,"C://TURBOC3//BGI");
}
void box(int x1, int y1, int x2, int y2, int relleno, int color)
{
int poly[8];
poly[0]=x1;  poly[1]=y1;
poly[2]=x2;  poly[3]=y1;
poly[4]=x2;  poly[5]=y2;
poly[6]=x1;  poly[7]=y2;
setfillstyle(relleno, color);
fillpoly(4, poly);
}
void presentacion()
{
setcolor(BLACK);
box(0,0,639,299,1, CYAN);
box(0,299,639,479,1,BLUE);

settextstyle(6,0,5);
outtextxy(220, 78,"Batalla Naval");

int highstick[52];

highstick[0]=458;highstick[1]=80;highstick[2]=510;highstick[3]=80;highstick[4]=510;
highstick[5]=117;highstick[6]=484;highstick[7]=117;highstick[8]=484;highstick[9]=144;
highstick[10]=550;highstick[11]=144;highstick[12]=550;highstick[13]=156;highstick[14]=484;
highstick[15]=157;highstick[16]=484;highstick[17]=170;highstick[18]=497;highstick[19]=170;highstick[20]=497;
highstick[21]=183;highstick[22]=510;highstick[23]=183;highstick[24]=511;highstick[25]=210;
highstick[26]=498;highstick[27]=208;highstick[28]=497;highstick[29]=196;highstick[30]=471;
highstick[31]=196;highstick[32]=470;highstick[33]=209;highstick[34]=457;highstick[35]=209;
highstick[36]=456;highstick[37]=196;highstick[38]=444;highstick[39]=196;
highstick[40]=444;highstick[41]=184;highstick[42]=431;highstick[43]=183;
highstick[44]=430;highstick[45]=157;highstick[46]=366;highstick[47]=157;highstick[48]=366;
highstick[49]=144;highstick[50]=460;highstick[51]=144;

setfillstyle(1,BLACK);
fillpoly(26,highstick);

int skullc[24];

skullc[0]=472;skullc[1]=196;skullc[2]=498;skullc[3]=196;skullc[4]=498;
skullc[5]=208;skullc[6]=511;skullc[7]=209;skullc[8]=511;skullc[9]=247;
skullc[10]=498;skullc[11]=247;skullc[12]=498;skullc[13]=261;skullc[14]=470;
skullc[15]=261;skullc[16]=470;skullc[17]=248;skullc[18]=458;skullc[19]=248;
skullc[20]=458;skullc[21]=209;skullc[22]=471;skullc[23]=209;

setfillstyle(1, WHITE);
fillpoly(12, skullc);

int skulleyes[8];

skulleyes[0]=471;skulleyes[1]=222;skulleyes[2]=497;skulleyes[3]=222;
skulleyes[4]=497;skulleyes[5]=234;skulleyes[6]=471;skulleyes[7]=234;

setfillstyle(1, BLACK);
fillpoly(4, skulleyes);

int cuadrado1[8];

cuadrado1[0]=445;cuadrado1[1]=196;cuadrado1[2]=457;cuadrado1[3]=196;cuadrado1[4]=457;
cuadrado1[5]=210;cuadrado1[6]=445;cuadrado1[7]=210;

setfillstyle(1, WHITE);
fillpoly(4, cuadrado1);



int cuadrado2[8];

cuadrado2[0]=511;cuadrado2[1]=196;cuadrado2[2]=523;cuadrado2[3]=196;cuadrado2[4]=523;
cuadrado2[5]=210;cuadrado2[6]=511;cuadrado2[7]=210;

setfillstyle(1, WHITE);
fillpoly(4, cuadrado2);



int cuadrado3[8];

cuadrado3[0]=511;cuadrado3[1]=248;cuadrado3[2]=524;cuadrado3[3]=248;cuadrado3[4]=524;
cuadrado3[5]=260;cuadrado3[6]=511;cuadrado3[7]=260;

setfillstyle(1, WHITE);
fillpoly(4, cuadrado3);

int cuadrado4[8];

cuadrado4[0]=445;cuadrado4[1]=248;cuadrado4[2]=457;cuadrado4[3]=248;cuadrado4[4]=457;
cuadrado4[5]=260;cuadrado4[6]=445;cuadrado4[7]=260;

setfillstyle(1, WHITE);
fillpoly(4, cuadrado4);

int velaizquierda[78];

velaizquierda[0]=379;velaizquierda[1]=158;velaizquierda[2]=430;velaizquierda[3]=158;
velaizquierda[4]=431;velaizquierda[5]=183;velaizquierda[6]=444;velaizquierda[7]=183;
velaizquierda[8]=444;velaizquierda[9]=248;velaizquierda[10]=431;velaizquierda[11]=248;
velaizquierda[12]=431;velaizquierda[13]=261;velaizquierda[14]=444;velaizquierda[15]=261;
velaizquierda[16]=444;velaizquierda[17]=274;velaizquierda[18]=431;
velaizquierda[19]=274;velaizquierda[20]=431;velaizquierda[21]=287;velaizquierda[22]=379;velaizquierda[23]=287;
velaizquierda[24]=379;velaizquierda[25]=273;velaizquierda[26]=365;velaizquierda[27]=273;
velaizquierda[28]=365;velaizquierda[29]=313;velaizquierda[30]=391;velaizquierda[31]=313;
velaizquierda[32]=391;velaizquierda[33]=338;velaizquierda[34]=365;velaizquierda[35]=338;
velaizquierda[36]=365;velaizquierda[37]=325;velaizquierda[38]=299;velaizquierda[39]=325;velaizquierda[40]=299;
velaizquierda[41]=313;velaizquierda[42]=312;velaizquierda[43]=313;velaizquierda[44]=312;velaizquierda[45]=300;
velaizquierda[46]=326;velaizquierda[47]=300;velaizquierda[48]=326;velaizquierda[49]=287;
velaizquierda[50]=339;velaizquierda[51]=287;velaizquierda[52]=339;velaizquierda[53]=274;velaizquierda[54]=352;
velaizquierda[55]=274;velaizquierda[56]=352;velaizquierda[57]=261;velaizquierda[58]=365;
velaizquierda[59]=248;velaizquierda[60]=379;velaizquierda[61]=248;velaizquierda[62]=379;
velaizquierda[63]=235;velaizquierda[64]=392;velaizquierda[65]=235;velaizquierda[66]=392;
velaizquierda[67]=222;velaizquierda[68]=405;velaizquierda[69]=222;velaizquierda[70]=405;
velaizquierda[71]=182;velaizquierda[72]=392;velaizquierda[73]=182;velaizquierda[74]=392;
velaizquierda[75]=169;velaizquierda[76]=379;velaizquierda[77]=169;


setfillstyle(1, RED);
fillpoly(39, velaizquierda);

int veladerecha[56];


veladerecha[0]=485;veladerecha[1]=157;veladerecha[2]=537;veladerecha[3]=157;
veladerecha[4]=537;veladerecha[5]=170;veladerecha[6]=550;veladerecha[7]=170;
veladerecha[8]=550;veladerecha[9]=183;veladerecha[10]=563;veladerecha[11]=183;veladerecha[12]=563;
veladerecha[13]=234;veladerecha[14]=550;veladerecha[15]=234;veladerecha[16]=550;
veladerecha[17]=273;veladerecha[18]=537;veladerecha[19]=273;veladerecha[20]=537;
veladerecha[21]=286;veladerecha[22]=524;veladerecha[23]=286;veladerecha[24]=524;
veladerecha[25]=300;veladerecha[26]=498;veladerecha[27]=300;veladerecha[28]=498;
veladerecha[29]=274;veladerecha[30]=511;veladerecha[31]=274;veladerecha[32]=511;
veladerecha[33]=261;veladerecha[34]=524;veladerecha[35]=261;veladerecha[36]=524;
veladerecha[37]=247;veladerecha[38]=511;veladerecha[39]=247;veladerecha[40]=511;
veladerecha[41]=209;veladerecha[42]=524;veladerecha[43]=209;veladerecha[44]=524;
veladerecha[45]=195;veladerecha[46]=524;veladerecha[47]=195;veladerecha[48]=511;
veladerecha[49]=195;veladerecha[50]=511;veladerecha[51]=183;veladerecha[52]=498;
veladerecha[53]=183;veladerecha[54]=498;veladerecha[55]=170;veladerecha[54]=485;
veladerecha[55]=170;

setfillstyle(1, RED);
fillpoly(28, veladerecha);


int body[104];

body[0]=630;body[1]=313;body[2]=630;body[3]=351;body[4]=590;body[5]=351;body[6]=590;
body[7]=377;body[8]=577;body[9]=377;body[10]=577;body[11]=403;body[12]=563;body[13]=403;
body[14]=563;body[15]=416;body[16]=418;body[17]=416;body[18]=418;body[19]=403;
body[20]=405;body[21]=403;body[22]=405;body[23]=390;body[24]=379;body[25]=390;
body[26]=379;body[27]=377;body[28]=365;body[29]=377;body[30]=365;body[31]=364;
body[32]=339;body[33]=364;body[34]=339;body[35]=351;body[36]=312;body[37]=351;
body[38]=312;body[39]=338;body[40]=286;body[41]=338;body[42]=286;body[43]=326;
body[44]=351;body[45]=326;body[46]=351;body[47]=339;body[48]=458;body[49]=339;
body[50]=458;body[51]=299;body[52]=379;body[53]=299;body[54]=379;body[55]=287;
body[56]=431;body[57]=287;body[58]=431;body[59]=274;body[60]=445;body[61]=274;
body[62]=445;body[63]=261;body[64]=458;body[65]=261;body[66]=458;body[67]=248;
body[68]=470;body[69]=248;body[70]=470;body[71]=261;body[72]=498;body[73]=261;
body[74]=498;body[75]=248;body[76]=510;body[77]=248;body[78]=510;body[79]=273;
body[80]=497;body[81]=273;body[82]=497;body[83]=300;body[84]=537;body[85]=300;
body[86]=537;body[87]=312;body[88]=484;body[89]=312;body[90]=484;body[91]=339;
body[92]=538;body[93]=339;body[94]=538;body[95]=313;body[96]=577;body[97]=313;
body[98]=577;body[99]=300;body[100]=603;body[101]=301;body[102]=603;body[103]=313;


setfillstyle(1, BLACK);
fillpoly(52, body);


int back[16];

back[0]=564;back[1]=248;back[2]=616;back[3]=248;back[4]=616;back[5]=261;back[6]=630;
back[7]=261;back[8]=630;back[9]=286;back[10]=616;back[11]=286;back[12]=616;back[13]=299;
back[14]=564;back[15]=299;

setfillstyle(1, RED);
fillpoly(8, back);

int back2[12];

back2[0]=577;back2[1]=222;back2[2]=616;back2[3]=222;back2[4]=616;back2[5]=234;
back2[6]=603;back2[7]=234;back2[8]=603;back2[9]=247;back2[10]=577;back2[11]=247;

setfillstyle(1, BLACK);
fillpoly(6, back2);

setfillstyle(1, YELLOW);
bar(392,365,417,377);
bar(445,365,470,377);
bar(485,365,510,377);
bar(538,365,563,377);
bar(551,326,563,338);
bar(578,326,590,338);
bar(604,326,616,338);

setfillstyle(1, BLACK);
bar(444,209,457,247);
bar(431,248,444,260);

int sun[76];

sun[0]=0;sun[1]=0;sun[2]=142;sun[3]=0;sun[4]=142;sun[5]=5;sun[6]=147;sun[7]=5;
sun[8]=147;sun[9]=18;sun[10]=154;sun[11]=18;sun[12]=154;sun[13]=31;sun[14]=161;
sun[15]=31;sun[16]=161;sun[17]=69;sun[18]=155;sun[19]=69;sun[20]=155;sun[21]=81;
sun[22]=149;sun[23]=81;sun[24]=149;sun[25]=94;sun[26]=142;sun[27]=94;sun[28]=142;
sun[29]=101;sun[30]=135;sun[31]=101;sun[32]=135;sun[33]=108;sun[34]=129;sun[35]=108;
sun[36]=129;sun[37]=114;sun[38]=122;sun[39]=114;sun[40]=122;sun[41]=120;sun[42]=115;
sun[43]=120;sun[44]=115;sun[45]=126;sun[46]=102;sun[47]=126;sun[48]=102;sun[49]=133;
sun[50]=89;sun[51]=133;sun[52]=89;sun[53]=139;sun[54]=47;sun[55]=139;sun[56]=47;
sun[57]=133;sun[58]=34;sun[59]=133;sun[60]=34;sun[61]=127;sun[62]=20;sun[63]=127;
sun[64]=20;sun[65]=120;sun[66]=14;sun[67]=120;sun[68]=14;sun[69]=114;sun[70]=7;
sun[71]=114;sun[72]=6;sun[73]=108;sun[74]=0;sun[75]=108;

setfillstyle(1, YELLOW);
fillpoly(38, sun);


int sunray1[32];

sunray1[0]=55;sunray1[1]=152;sunray1[2]=81;sunray1[3]=152;sunray1[4]=81;sunray1[5]=159;
sunray1[6]=87;sunray1[7]=159;sunray1[8]=87;sunray1[9]=183;sunray1[10]=81;sunray1[11]=183;
sunray1[12]=81;sunray1[13]=196;sunray1[14]=74;sunray1[15]=196;sunray1[16]=74;sunray1[17]=202;
sunray1[18]=62;sunray1[19]=202;sunray1[20]=62;sunray1[21]=196;sunray1[22]=55;
sunray1[23]=196;sunray1[24]=55;sunray1[25]=183;sunray1[26]=48;sunray1[27]=183;
sunray1[28]=48;sunray1[29]=158;sunray1[30]=55;sunray1[31]=158;


setfillstyle(1, YELLOW);
fillpoly(16, sunray1);

int sunray2[44];

 sunray2[0]=181; sunray2[1]=157; sunray2[2]=155; sunray2[3]=157; sunray2[4]=155;
 sunray2[5]=152; sunray2[6]=142; sunray2[7]=152; sunray2[8]=142; sunray2[9]=145;
 sunray2[10]=129; sunray2[11]=145; sunray2[12]=129; sunray2[13]=139; sunray2[14]=136;
 sunray2[15]=139; sunray2[16]=136; sunray2[17]=133; sunray2[18]=142; sunray2[19]=133;
 sunray2[20]=142; sunray2[21]=127; sunray2[22]=149; sunray2[23]=127; sunray2[24]=149;
 sunray2[25]=120; sunray2[26]=156; sunray2[27]=120; sunray2[28]=156; sunray2[29]=114;
 sunray2[30]=162; sunray2[31]=114; sunray2[32]=162; sunray2[33]=108; sunray2[34]=168;
 sunray2[35]=108; sunray2[36]=168; sunray2[37]=120; sunray2[38]=175; sunray2[39]=121;
 sunray2[40]=175; sunray2[41]=133; sunray2[42]=181; sunray2[43]=133;

setfillstyle(1,YELLOW);
fillpoly(22, sunray2);

int sunray3[32];

sunray3[0]=182;sunray3[1]=32;sunray3[2]=208;sunray3[3]=32;sunray3[4]=208;
sunray3[5]=38;sunray3[6]=221;sunray3[7]=38;sunray3[8]=222;sunray3[9]=44;sunray3[10]=228;
sunray3[11]=44;sunray3[12]=228;sunray3[13]=56;sunray3[14]=221;sunray3[15]=56;
sunray3[16]=221;sunray3[17]=62;sunray3[18]=208;sunray3[19]=62;sunray3[20]=208;
sunray3[21]=69;sunray3[22]=182;sunray3[23]=69;sunray3[24]=182;sunray3[25]=62;sunray3[26]=176;
sunray3[27]=62;sunray3[28]=176;sunray3[29]=38;sunray3[30]=182;sunray3[31]=38;

setfillstyle(1, YELLOW);
fillpoly(16,sunray3);
}
void menu()
{
setcolor(WHITE);
box(0,0,639,30,1, LIGHTBLUE);
settextstyle(2,0,5);

box(20,0,140,30,1,BLACK);
outtextxy(30,5, "JUGAR");

box(150,0,280,30,1,BLACK);
outtextxy(160,5, "INSTRUCCIONES");

box(290,0,410,30,1,BLACK);
outtextxy(325,5, "ACERCA DE");

box(550,0,620,30,1,BLACK);
outtextxy(565,5, "SALIR");
}
void fragata(int i, int j)
{
int velap[6];
velap[0]=32+i*25;  velap[1]=112+j*25;
velap[2]=42+i*25;  velap[3]=102+j*25;
velap[4]=42+i*25;  velap[5]=112+j*25;
setfillstyle(1, 1);
fillpoly(3, velap);

int velap2[6];
velap2[0]=43+i*25;  velap2[1]=112+j*25;
velap2[2]=43+i*25;  velap2[3]=104+j*25;
velap2[4]=49+i*25;  velap2[5]=112+j*25;
setfillstyle(1, 1);
fillpoly(3, velap2);


int body1[8];

body1[0]=30+i*25;   body1[1]=112+j*25;
body1[2]=53+i*25;   body1[3]=112+j*25;
body1[4]=53+i*25;   body1[5]=119+j*25;
body1[6]=34+i*25;   body1[7]=119+j*25;
setfillstyle(1, 1);
fillpoly(4, body1);
}
void destructorH(int i, int j)
{
int body1[8];
body1[0]=37+i*25; body1[1]=124+j*25;
body1[2]=31+i*25; body1[3]=115+j*25;
body1[4]=79+i*25; body1[5]=115+j*25;
body1[6]=72+i*25; body1[7]=124+j*25;
setfillstyle(1,1);
fillpoly(4,body1);

int body2[8];
body2[0]=38+i*25; body2[1]=115+j*25;
body2[2]=38+i*25; body2[3]=111+j*25;
body2[4]=70+i*25; body2[5]=111+j*25;
body2[6]=70+i*25; body2[7]=115+j*25;
setfillstyle(1,1);
fillpoly(4,body2);

int body3[22];
body3[0]=41+i*25; body3[1]=110+j*25;
body3[2]=41+i*25; body3[3]=107+j*25;
body3[4]=43+i*25; body3[5]=107+j*25;
body3[6]=46+i*25; body3[7]=103+j*25;
body3[8]=62+i*25; body3[9]=103+j*25;
body3[10]=65+i*25; body3[11]=107+j*25;
body3[12]=68+i*25; body3[13]=111+j*25;
body3[14]=70+i*25; body3[15]=111+j*25;
body3[16]=70+i*25; body3[17]=110+j*25;
body3[18]=70+i*25; body3[19]=111+j*25;
body3[20]=38+i*25; body3[21]=111+j*25;
setfillstyle(1,0);
fillpoly(11,body3);

fillellipse(40+i*25,119+j*25,1,1);
fillellipse(45+i*25,119+j*25,1,1);
fillellipse(50+i*25,119+j*25,1,1);
fillellipse(55+i*25,119+j*25,1,1);
fillellipse(60+i*25,119+j*25,1,1);
fillellipse(65+i*25,119+j*25,1,1);
fillellipse(70+i*25,119+j*25,1,1);
}
void submarinoH(int i, int j)
{
int body1[8];
body1[0]=64+i*25; body1[1]=108+j*25;
body1[2]=64+i*25; body1[3]=103+j*25;
body1[4]=74+i*25; body1[5]=103+j*25;
body1[6]=74+i*25; body1[7]=108+j*25;
setfillstyle(1,0);
fillpoly(4,body1);

int body2[56];
body2[0]=40+i*25; body2[1]=108+j*25;
body2[2]=98+i*25; body2[3]=108+j*25;
body2[4]=98+i*25; body2[5]=109+j*25;
body2[6]=100+i*25; body2[7]=109+j*25;
body2[8]=100+i*25; body2[9]=118+j*25;
body2[10]=97+i*25; body2[11]=118+j*25;
body2[12]=97+i*25; body2[13]=120+j*25;
body2[14]=90+i*25; body2[15]=120+j*25;
body2[16]=90+i*25; body2[17]=121+j*25;
body2[18]=84+i*25; body2[19]=121+j*25;
body2[20]=84+i*25; body2[21]=122+j*25;
body2[22]=60+i*25; body2[23]=122+j*25;
body2[24]=60+i*25; body2[25]=121+j*25;
body2[26]=50+i*25; body2[27]=121+j*25;
body2[28]=50+i*25; body2[29]=120+j*25;
body2[30]=46+i*25; body2[31]=120+j*25;
body2[32]=46+i*25; body2[33]=119+j*25;
body2[34]=39+i*25; body2[35]=119+j*25;
body2[36]=33+i*25; body2[37]=115+j*25;
body2[38]=33+i*25; body2[39]=117+j*25;
body2[40]=31+i*25; body2[41]=117+j*25;
body2[42]=31+i*25; body2[43]=114+j*25;
body2[44]=30+i*25; body2[45]=114+j*25;
body2[46]=30+i*25; body2[47]=110+j*25;
body2[48]=31+i*25; body2[49]=110+j*25;
body2[50]=31+i*25; body2[51]=107+j*25;
body2[52]=33+i*25; body2[53]=107+j*25;
body2[54]=33+i*25; body2[55]=110+j*25;

setfillstyle(1,1);
fillpoly(28,body2);

fillellipse(45+i*25,114+j*25,1,1);
fillellipse(50+i*25,114+j*25,1,1);
fillellipse(55+i*25,114+j*25,1,1);
fillellipse(60+i*25,114+j*25,1,1);
fillellipse(65+i*25,114+j*25,1,1);
fillellipse(70+i*25,114+j*25,1,1);
fillellipse(75+i*25,114+j*25,1,1);
fillellipse(80+i*25,114+j*25,1,1);
fillellipse(85+i*25,114+j*25,1,1);
}
void portavionesH(int i, int j)
{
int body1[8];
body1[0]=41+i*25; body1[1]=111+j*25;
body1[2]=41+i*25; body1[3]=103+j*25;
body1[4]=119+i*25; body1[5]=103+j*25;
body1[6]=119+i*25; body1[7]=111+j*25;
setfillstyle(1,0);
fillpoly(4,body1);

int body2[8];
body2[0]=32+i*25;  body2[1]=110+j*25;
body2[2]=127+i*25; body2[3]=110+j*25;
body2[4]=114+i*25; body2[5]=123+j*25;
body2[6]=43+i*25;  body2[7]=123+j*25;
setfillstyle(1,1);
fillpoly(4,body2);

box(47+i*25,104+j*25,52+i*25,109+j*25,1,15);
box(59+i*25,104+j*25,64+i*25,109+j*25,1,15);
box(71+i*25,104+j*25,76+i*25,109+j*25,1,15);
box(83+i*25,104+j*25,88+i*25,109+j*25,1,15);
box(95+i*25,104+j*25,100+i*25,109+j*25,1,15);
box(107+i*25,104+j*25,112+i*25,109+j*25,1,15);

fillellipse(47+i*25,117+j*25,1,1);
fillellipse(52+i*25,117+j*25,1,1);
fillellipse(57+i*25,117+j*25,1,1);
fillellipse(62+i*25,117+j*25,1,1);
fillellipse(67+i*25,117+j*25,1,1);
fillellipse(72+i*25,117+j*25,1,1);
fillellipse(77+i*25,117+j*25,1,1);
fillellipse(82+i*25,117+j*25,1,1);
fillellipse(87+i*25,117+j*25,1,1);
fillellipse(92+i*25,117+j*25,1,1);
fillellipse(97+i*25,117+j*25,1,1);
fillellipse(102+i*25,117+j*25,1,1);
fillellipse(107+i*25,117+j*25,1,1);
fillellipse(112+i*25,117+j*25,1,1);
}
void destructorV(int i, int j)
{
int body1[8];
body1[0]=43+i*25; body1[1]=103+j*25;
body1[2]=43+i*25; body1[3]=148+j*25;
body1[4]=32+i*25; body1[5]=142+j*25;
body1[6]=32+i*25; body1[7]=109+j*25;
setfillstyle(1,1);
fillpoly(4,body1);

int body2[8];
body2[0]=43+i*25; body2[1]=110+j*25;
body2[2]=47+i*25; body2[3]=110+j*25;
body2[4]=47+i*25; body2[5]=140+j*25;
body2[6]=43+i*25; body2[7]=140+j*25;
setfillstyle(1,1);
fillpoly(4,body2);

int body3[8];
body3[0]=47+i*25; body3[1]=113+j*25;
body3[2]=53+i*25; body3[3]=117+j*25;
body3[4]=53+i*25; body3[5]=135+j*25;
body3[6]=47+i*25; body3[7]=138+j*25;
setfillstyle(1,0);
fillpoly(4,body3);

fillellipse(38+i*25,112+j*25,1,1);
fillellipse(38+i*25,117+j*25,1,1);
fillellipse(38+i*25,122+j*25,1,1);
fillellipse(38+i*25,127+j*25,1,1);
fillellipse(38+i*25,132+j*25,1,1);
fillellipse(38+i*25,137+j*25,1,1);
fillellipse(38+i*25,141+j*25,1,1);
}
void submarinoV(int i, int j)
{
int body1[8];
body1[0]=48+i*25; body1[1]=137+j*25;
body1[2]=53+i*25; body1[3]=137+j*25;
body1[4]=53+i*25; body1[5]=148+j*25;
body1[6]=48+i*25; body1[7]=148+j*25;
setfillstyle(1,0);
fillpoly(4,body1);

int body2[56];
body2[0]=48+i*25; body2[1]=113+j*25;
body2[2]=48+i*25;   body2[3]=171+j*25;
body2[4]=48+i*25; body2[5]=172+j*25;
body2[6]=46+i*25; body2[7]=172+j*25;
body2[8]=46+i*25; body2[9]=173+j*25;
body2[10]=40+i*25; body2[11]=173+j*25;
body2[12]=40+i*25; body2[13]=172+j*25;
body2[14]=34+i*25; body2[15]=168+j*25;
body2[16]=33+i*25; body2[17]=168+j*25;
body2[18]=33+i*25; body2[19]=164+j*25;
body2[20]=32+i*25; body2[21]=164+j*25;
body2[22]=32+i*25; body2[23]=159+j*25;
body2[24]=32+i*25; body2[25]=132+j*25;
body2[26]=33+i*25; body2[27]=132+j*25;
body2[28]=33+i*25; body2[29]=123+j*25;
body2[30]=33+i*25; body2[31]=118+j*25;
body2[32]=34+i*25; body2[33]=118+j*25;
body2[34]=34+i*25; body2[35]=115+j*25;
body2[36]=40+i*25; body2[37]=107+j*25;
body2[38]=37+i*25; body2[39]=107+j*25;
body2[40]=37+i*25; body2[41]=105+j*25;
body2[42]=39+i*25; body2[43]=105+j*25;
body2[44]=39+i*25; body2[45]=104+j*25;
body2[46]=48+i*25; body2[47]=104+j*25;
body2[48]=49+i*25; body2[49]=107+j*25;
body2[50]=46+i*25; body2[51]=107+j*25;
body2[52]=46+i*25; body2[53]=109+j*25;
body2[54]=48+i*25; body2[55]=112+j*25;

setfillstyle(1,1);
fillpoly(28,body2);

fillellipse(42+i*25,114+j*25,1,1);
fillellipse(42+i*25,119+j*25,1,1);
fillellipse(42+i*25,123+j*25,1,1);
fillellipse(42+i*25,128+j*25,1,1);
fillellipse(42+i*25,133+j*25,1,1);
fillellipse(42+i*25,138+j*25,1,1);
fillellipse(42+i*25,143+j*25,1,1);
fillellipse(42+i*25,148+j*25,1,1);
fillellipse(42+i*25,153+j*25,1,1);
}
void portavionesV(int i, int j)
{
int body1[8];
body1[0]=44+i*25; body1[1]=103+j*25;
body1[2]=44+i*25; body1[3]=194+j*25;
body1[4]=31+i*25; body1[5]=183+j*25;
body1[6]=31+i*25; body1[7]=116+j*25;
setfillstyle(1,1);
fillpoly(4,body1);

int body2[8];
body2[0]=45+i*25;  body2[1]=111+j*25;
body2[2]=53+i*25;  body2[3]=111+j*25;
body2[4]=53+i*25;  body2[5]=187+j*25;
body2[6]=45+i*25;  body2[7]=187+j*25;
setfillstyle(1,0);
fillpoly(4,body2);

box(47+i*25,117+j*25,51+i*25,122+j*25,1,15);
box(47+i*25,129+j*25,51+i*25,134+j*25,1,15);
box(47+i*25,141+j*25,51+i*25,146+j*25,1,15);
box(47+i*25,153+j*25,51+i*25,158+j*25,1,15);
box(47+i*25,165+j*25,51+i*25,170+j*25,1,15);
box(47+i*25,177+j*25,51+i*25,182+j*25,1,15);

fillellipse(39+i*25,115+j*25,1,1);
fillellipse(39+i*25,120+j*25,1,1);
fillellipse(39+i*25,125+j*25,1,1);
fillellipse(39+i*25,130+j*25,1,1);
fillellipse(39+i*25,135+j*25,1,1);
fillellipse(39+i*25,140+j*25,1,1);
fillellipse(39+i*25,145+j*25,1,1);
fillellipse(39+i*25,150+j*25,1,1);
fillellipse(39+i*25,155+j*25,1,1);
fillellipse(39+i*25,160+j*25,1,1);
fillellipse(39+i*25,165+j*25,1,1);
fillellipse(39+i*25,170+j*25,1,1);
fillellipse(39+i*25,175+j*25,1,1);
fillellipse(39+i*25,180+j*25,1,1);
}
void crossJ(int i, int j)
{
int cruz[24];
cruz[0]=44+i*25; cruz[1]=108+j*25;
cruz[2]=51+i*25; cruz[3]=102+j*25;
cruz[4]=54+i*25; cruz[5]=105+j*25;
cruz[6]=47+i*25; cruz[7]=113+j*25;
cruz[8]=55+i*25; cruz[9]=121+j*25;
cruz[10]=52+i*25; cruz[11]=124+j*25;
cruz[12]=43+i*25; cruz[13]=117+j*25;
cruz[14]=37+i*25; cruz[15]=124+j*25;
cruz[16]=33+i*25; cruz[17]=120+j*25;
cruz[18]=40+i*25; cruz[19]=113+j*25;
cruz[20]=33+i*25; cruz[21]=106+j*25;
cruz[22]=37+i*25; cruz[23]=102+j*25;
setfillstyle(1,0);
fillpoly(12,cruz);
}

void crossCPU(int i, int j)
{
int cruz[24];
cruz[0]=344+i*25; cruz[1]=108+j*25;
cruz[2]=351+i*25; cruz[3]=102+j*25;
cruz[4]=354+i*25; cruz[5]=105+j*25;
cruz[6]=347+i*25; cruz[7]=113+j*25;
cruz[8]=355+i*25; cruz[9]=121+j*25;
cruz[10]=352+i*25; cruz[11]=124+j*25;
cruz[12]=343+i*25; cruz[13]=117+j*25;
cruz[14]=337+i*25; cruz[15]=124+j*25;
cruz[16]=333+i*25; cruz[17]=120+j*25;
cruz[18]=340+i*25; cruz[19]=113+j*25;
cruz[20]=333+i*25; cruz[21]=106+j*25;
cruz[22]=337+i*25; cruz[23]=102+j*25;
setfillstyle(1,0);
fillpoly(12,cruz);
}
void crossJA(int i, int j)
{
int cruz[24];
cruz[0]=44+i*25; cruz[1]=108+j*25;
cruz[2]=51+i*25; cruz[3]=102+j*25;
cruz[4]=54+i*25; cruz[5]=105+j*25;
cruz[6]=47+i*25; cruz[7]=113+j*25;
cruz[8]=55+i*25; cruz[9]=121+j*25;
cruz[10]=52+i*25; cruz[11]=124+j*25;
cruz[12]=43+i*25; cruz[13]=117+j*25;
cruz[14]=37+i*25; cruz[15]=124+j*25;
cruz[16]=33+i*25; cruz[17]=120+j*25;
cruz[18]=40+i*25; cruz[19]=113+j*25;
cruz[20]=33+i*25; cruz[21]=106+j*25;
cruz[22]=37+i*25; cruz[23]=102+j*25;
setfillstyle(1,15);
fillpoly(12,cruz);
}

void crossCPUA(int i, int j)
{
int cruz[24];
cruz[0]=344+i*25; cruz[1]=108+j*25;
cruz[2]=351+i*25; cruz[3]=102+j*25;
cruz[4]=354+i*25; cruz[5]=105+j*25;
cruz[6]=347+i*25; cruz[7]=113+j*25;
cruz[8]=355+i*25; cruz[9]=121+j*25;
cruz[10]=352+i*25; cruz[11]=124+j*25;
cruz[12]=343+i*25; cruz[13]=117+j*25;
cruz[14]=337+i*25; cruz[15]=124+j*25;
cruz[16]=333+i*25; cruz[17]=120+j*25;
cruz[18]=340+i*25; cruz[19]=113+j*25;
cruz[20]=333+i*25; cruz[21]=106+j*25;
cruz[22]=337+i*25; cruz[23]=102+j*25;
setfillstyle(1,15);
fillpoly(12,cruz);
}
void pintatableros()
{
int i,j;
presentacion();
setcolor(WHITE);

    for(i=0; i<10; i++)
    for(j=0; j<10; j++)
    box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);


    for(i=0; i<10; i++)
    for(j=0; j<10; j++)
    box(330+i*25,100+j*25,355+i*25,125+j*25,1,BLUE);

}
int val00(int M[10][10],int x, int y)
{
  if(M[x][y]>0)
   {
   return 0;
   }
	else
	{
	return 1;
	}

}

int val0(int M[10][10],int i, int j)
{
  if(M[i][j]>0)
    {
   return 0;
   }
	else
	{
	return 1;
	}

}
int val(int M[10][10],int i,int j)
{
if(M[i][j]>0 || M[i+1][j]>0)
   {
   return 0;
   }
	else
	{
	return 1;
	}
}
int val2(int M[10][10], int i, int j)
{
if(M[i][j]>0 || M[i][j+1]>0)
   {
   return 0;
   }
	else
	{
	return 1;
	}
}
int val3(int M[10][10], int i, int j)
{
if(M[i][j]>0 || M[i+1][j]>0 || M[i+2][j]>0)

   {
   return 0;
   }
	else
	{
	return 1;
	}
}
int val4(int M[10][10], int i, int j)
{
if(M[i][j]>0 || M[i][j+1]>0 || M[i][j+2]>0)

   {
   return 0;
   }
	else
	{
	return 1;
	}
}
int val5(int M[10][10], int i, int j)
{
if(M[i][j]>0 || M[i+1][j]>0 || M[i+2][j]>0 || M[i+3][j]>0)

   {
   return 0;
   }
	else
	{
	return 1;
	}
}
int val6(int M[10][10], int i, int j)
{
if(M[i][j]>0 || M[i][j+1]>0 || M[i][j+2]>0 || M[i][j+3]>0)

   {
   return 0;
   }
	else
	{
	return 1;
	}
}

int val7(int N[10][10], int x, int y)
{
if(N[x][y]>0 || N[x+1][y]>0 || x==9)
     {
     return 0;
     }
	else
	{
	return 1;
	}
}

int val8(int N[10][10], int x, int y)
{
if(N[x][y]>0 || N[x][y+1]>0 || y==9)
     {
     return 0;
     }
	else
	{
	return 1;
	}
}

int val9(int N[10][10], int x, int y)
{
if(N[x][y]>0 || N[x+1][y]>0 || N[x+2][y]>0 || x==8 || x==9)
     {
     return 0;
     }
	else
	{
	return 1;
	}
}

int val10(int N[10][10], int x, int y)
{
if(N[x][y]>0 || N[x][y+1]>0 || N[x][y+2]>0 || y==8 || y==9)
     {
     return 0;
     }
	else
	{
	return 1;
	}
}
int val11(int N[10][10], int x, int y)
{
if(N[x][y]>0 || N[x+1][y]>0 || N[x+2][y]>0 || N[x+3][y]>0 || x==7 || x==8 || x==9)
     {
     return 0;
     }
	else
	{
	return 1;
	}
}

int val12(int N[10][10], int x, int y)
{
if(N[x][y]>0 || N[x][y+1]>0 || N[x][y+2]>0 || N[x][y+3]>0 || y==7 || y==8 || y==9)
     {
     return 0;
     }
	else
	{
	return 1;
	}
}
void ubicafragata()
{
int i=8,j=13;
settextstyle(2,0,6);
box(30,20,600,80,1,GREEN);
outtextxy(35,20,"Ubicando embarcaciones: Fragatas...");
box(30,370,600,460,1,GREEN);
setfillstyle(1,BLUE);
settextstyle(2,0,10);
outtextxy(90,405,"Enter");
fragata(i,j);
settextstyle(2,0,6);
}
void ubicadestructor()
{

settextstyle(2,0,6);
box(30,20,600,80,1,GREEN);
outtextxy(35,20,"Ubicando embarcaciones: Destructores...");
box(30,370,600,460,1,GREEN);
setfillstyle(1,BLUE);
settextstyle(2,0,10);

int i=5,j=13;
outtextxy(140,405,"H");
destructorH(i,j);

i=15;j=12;

outtextxy(380,405,"V");
destructorV(i,j);
settextstyle(2,0,6);

}
void ubicasubmarino()
{
int i,j;
settextstyle(2,0,6);
box(30,20,600,80,1,GREEN);
outtextxy(35,20,"Ubicando embarcaciones: Submarinos...");
box(30,370,600,460,1,GREEN);
setfillstyle(1,BLUE);
settextstyle(2,0,10);
outtextxy(140,405,"H");
i=6; j=13;
submarinoH(i,j);
outtextxy(380,405,"V");
i=15; j=11;
submarinoV(i,j);
settextstyle(2,0,6);
}
void ubicaportaviones()
{
int i,j;
settextstyle(2,0,6);
box(30,20,600,80,1,GREEN);
outtextxy(35,20,"Ubicando embarcaciones: Portavion....");
box(30,370,600,460,1,GREEN);
setfillstyle(1,BLUE);
settextstyle(2,0,10);
outtextxy(120,405,"H");
i=5; j=13;
portavionesH(i,j);
outtextxy(380,405,"V");
i=15; j=11;
portavionesV(i,j);
setfillstyle(1,BLUE);
bar(406,460,433,474);
settextstyle(2,0,6);

}

void mensaje()
{
	box(30,370,600,460,1,GREEN);
	outtextxy(30,400,"No puedes colocar el barco");
	delay(1000);

}
void mensaje2()
{
box(30,20,600,80,1,GREEN);
outtextxy(80,30,"Turno CPU");
}
void instruccion()
{
box(30,20,600,80,1,GREEN);
settextstyle(2,0,5);
outtextxy(35,20,"Precione tecla 'g' para guardar");
outtextxy(35,30,"Precione tecla 'r' para restaurar");
outtextxy(35,40,"Precione tecla 'esc' salir");
outtextxy(400,50," Tu puntuacion: ");
settextstyle(2,0,6);
}
void guardar(int M[10][10], int N[10][10], int G1[10][10], int G2[10][10],
int &turn1, int &turn2,int d, int e,int puntuacionJ,int &P)
{
int i,j;

    for(i=0; i<10; i++)
    for(j=0; j<10; j++)
    {
    G1[i][j]=M[i][j];
    G2[i][j]=N[i][j];
    }
P=puntuacionJ;
turn1=d;
turn2=e;
}
void restaurar(int M[10][10], int N[10][10], int G1[10][10], int G2[10][10],
int turn1, int turn2,int &d, int &e, int &puntuacionJ, int P )
{
int i,j;

    for(i=0; i<10; i++)
    for(j=0; j<10; j++)
    {
    M[i][j]=G1[i][j];
    N[i][j]=G2[i][j];
    }
d=turn1;
e=turn2;
puntuacionJ=P;
}

void repinta(int M[10][10],int N[10][10],int A[10][10])
{
int i,j;

for(i=0; i<10; i++)
for(j=0; j<10; j++)
	{
	 switch(A[i][j])
	     {
	     case 1:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 fragata(i,j);
			 break;

	     case 2:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 box(30+(i+1)*25,100+j*25,55+(i+1)*25,125+j*25,1,RED);
			 destructorH(i,j);
			 break;

	     case 3:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 box(30+(i+1)*25,100+j*25,55+(i+1)*25,125+j*25,1,RED);
			 box(30+(i+2)*25,100+j*25,55+(i+2)*25,125+j*25,1,RED);
			 submarinoH(i,j);
			 break;

	     case 4:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 box(30+(i+1)*25,100+j*25,55+(i+1)*25,125+j*25,1,RED);
			 box(30+(i+2)*25,100+j*25,55+(i+2)*25,125+j*25,1,RED);
			 box(30+(i+3)*25,100+j*25,55+(i+3)*25,125+j*25,1,RED);
			 portavionesH(i,j);
			 break;

	     case 5:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 box(30+i*25,100+(j+1)*25,55+i*25,125+(j+1)*25,1,RED);
			 destructorV(i,j);
			 break;

	     case 6:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 box(30+i*25,100+(j+1)*25,55+i*25,125+(j+1)*25,1,RED);
			 box(30+i*25,100+(j+2)*25,55+i*25,125+(j+2)*25,1,RED);
			 submarinoV(i,j);
			 break;

	     case 7:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			 box(30+i*25,100+(j+1)*25,55+i*25,125+(j+1)*25,1,RED);
			 box(30+i*25,100+(j+2)*25,55+i*25,125+(j+2)*25,1,RED);
			 box(30+i*25,100+(j+3)*25,55+i*25,125+(j+3)*25,1,RED);
			 portavionesV(i,j);
			 break;
	    }
	}
for(i=0; i<10; i++)
for(j=0; j<10; j++)
 {

	   switch(M[i][j])
		{
		case 10:    crossJA(i,j);
			    break;


		case 11:    crossJ(i,j);
			    break;


		case 0:     box(30+i*25,100+j*25,55+i*25,125+j*25,1,RED);
			    break;
			}

			box(330+i*25,100+j*25,355+i*25,125+j*25,1,BLUE);
			switch(N[i][j])
			{
			case 10:    crossCPUA(i,j);
				    break;


			 case 11:    crossCPU(i,j);
				     break;

			}
	}

}
void ataqueJ(int N[10][10],int &d,int i,int j)
{
box(30,370,600,460,1,GREEN);
outtextxy(32,400,"Acertaste");
delay(1000);
box(30,370,600,460,1,GREEN);
N[i][j]=10;
d=d+1;
}
void movecpu(int M[10][10],int &e, int q, int w)
{
box(30,370,600,460,1,GREEN);
outtextxy(32,400,"Te he atinado!");
delay(1000);
box(30,370,600,460,1,GREEN);
M[q][w]=10;
e=e+1;
box(30,370,600,460,1,GREEN);
outtextxy(30,400,"Selecciona la posicion para atacar y presiona enter");
}
void ganacpu()
{
box(30,370,600,460,1,GREEN);
outtextxy(32,400,"Has perdido......");
outtextxy(32,410,"Suerte para la proxima!");
}
void ganajugador()
{
box(30,370,600,460,1,GREEN);
outtextxy(32,400,"Has ganado felicidades!");
}
void asigna(int M[10][10], int N[10][10], int G1[10][10], int G2[10][10], int A[10][10])
{
int i,j;

for(i=0;i<10;i++)
for(j=0;j<10;j++)
   {
    M[i][j]=0;
    G1[i][j]=0;
    N[i][j]=0;
    G2[i][j]=0;
    A[i][j]=0;
   }

}
void juega()
{
int M[10][10],G1[10][10],N[10][10],G2[10][10],A[10][10];
int c=0,i,j,k=0,a,b,valida,n,x,y,z=0;
int won,d=0,barcos=20,q,w,e=0,safe=0;
int turn1=0,turn2=0,P;
int puntuacionJ=0,L=1;
char cad[3],cad2[2],cad3[3];
char tecla;

asigna(M,N,G1,G2,A);
pintatableros();
box(30,400,600,460,1,GREEN);
i=0; j=0;

do{
ubicaportaviones();
gcvt(L,2,cad2);
outtextxy(380,20,cad2);
tecla=getch();
tecla=tolower(tecla);
b=1; a=1;

      switch(tecla)
	   {

  case 'h':   do{   setfillstyle(1,GREEN);
		    bar(370,23,400,40);
		    L=0;
		    gcvt(L,2,cad2);
		    outtextxy(380,20,cad2);
		    setfillstyle(1,BLUE);
		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,130+i*25,125+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,130+i*25,125+j*25);
		    switch(tecla)
		    {
			case 0 : tecla=getch();
			switch(tecla)
			{
			case 72: j--; break;
			case 80: j++; break;
			case 75: i--; break;
			case 77: i++; break;
			}
			if (i<0) i=0;
			if (i>6) i=6;
			if (j<0) j=0;
			if (j>9) j=9;
			break;

		     case 13:
		     valida=val5(M,i,j);
			if (valida==0)
				{
				mensaje();
				ubicaportaviones();
				outtextxy(380,20,cad2);
				}
					else
					{
					portavionesH(i,j);
					c=c+1;
					a=0;
					M[i][j]=4;
					M[i+1][j]=4;
					M[i+2][j]=4;
					M[i+3][j]=4;
					A[i][j]=4;
					i=0; j=0;

					}
					break;

		 case 27: a=0; L=1;
			  i=4; j=4;
			  break;
		   }

	       }while(a!=0);
	       break;

  case  'v':
		 do{
		    setfillstyle(1,GREEN);
		    bar(370,23,400,40);
		    L=0;
		    gcvt(L,2,cad2);
		    outtextxy(380,20,cad2);
		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,55+i*25,200+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,55+i*25,200+j*25);

			switch(tecla)
			{
			case 0 :tecla=getch();
				switch(tecla)
				{
				case 72: j--; break;
				case 80: j++; break;
				case 75: i--; break;
				case 77: i++; break;
				}
				if (i<0) i=0;
				if (i>9) i=9;
				if (j<0) j=0;
				if (j>6) j=6;
				break;

		     case 13:
		     valida=val6(M,i,j);
			if(valida==0)
			{
			mensaje();
			ubicaportaviones();
			outtextxy(380,20,cad2);
			}
				else
				{

				portavionesV(i,j);
				c=c+1;
				b=0;
				M[i][j]=7;
				M[i][j+1]=7;
				M[i][j+2]=7;
				M[i][j+3]=7;
				A[i][j]=7;
				i=0; j=0;
				}
				break;

		     case 27: b=0; L=1;
			      i=4; j=4;
			      break;

		     }


	       }while(b!=0);
	       break;

	    }

       }while(c<1);

a=0;c=0;b=0,L=2;
do{
ubicasubmarino();
gcvt(L,2,cad2);
outtextxy(390,20,cad2);
tecla=getch();
tecla=tolower(tecla);
b=1; a=1;
      switch(tecla)
	   {

  case 'h':
		    setfillstyle(1,GREEN);
		    bar(370,23,400,40);
		    L=L-1;
		    gcvt(L,2,cad2);
		    outtextxy(390,20,cad2);
		    do{
		    setfillstyle(1,BLUE);
		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,105+i*25,125+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,105+i*25,125+j*25);
			switch(tecla)
			{
			case 0 : tecla=getch();
				 switch(tecla)
				 {
				 case 72: j--; break;
				 case 80: j++; break;
				 case 75: i--; break;
				 case 77: i++; break;
				 }
				 if (i<0) i=0;
				 if (i>7) i=7;
				 if (j<0) j=0;
				 if (j>9) j=9;
				 break;

		     case 13:
		     valida=val3(M,i,j);
			if (valida==0)
			{
			mensaje();
			ubicasubmarino();
			outtextxy(390,20,cad2);
			}
				else
				{
				submarinoH(i,j);
				c=c+1;
				a=0;
				M[i][j]=3;
				M[i+1][j]=3;
				M[i+2][j]=3;
				A[i][j]=3;
				i=0; j=0;
				}
				break;

		 case 27: a=0; L=L+1;
			  i=4; j=4;
			  break;
		   }

	       }while(a!=0);
	       break;

  case  'v':
		    setfillstyle(1,GREEN);
		    bar(370,23,400,40);
		    L=L-1;
		    gcvt(L,2,cad2);
		    outtextxy(390,20,cad2);
		 do{

		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,55+i*25,175+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,55+i*25,175+j*25);

		    switch(tecla)
		    {
			case 0 : tecla=getch();
			switch(tecla)
			{
			case 72: j--; break;
			case 80: j++; break;
			case 75: i--; break;
			case 77: i++; break;
			}
			if (i<0) i=0;
			if (i>9) i=9;
			if (j<0) j=0;
			if (j>7) j=7;
			break;

		     case 13:
		     valida=val4(M,i,j);
			if(valida==0)
			{
			mensaje();
			ubicasubmarino();
			outtextxy(390,20,cad2);
			}
				else
				{
				submarinoV(i,j);
				c=c+1;
				b=0;
				M[i][j]=6;
				M[i][j+1]=6;
				M[i][j+2]=6;
				A[i][j]=6;
				i=0; j=0;
				}
				break;

		     case 27: b=0; L=L+1;
			      i=4; j=4;
			      break;

		     }


	       }while(b!=0);
	       break;

	    }

       }while(c<2);

a=0;c=0;b=0;L=3;
do{
ubicadestructor();
gcvt(L,2,cad2);
outtextxy(410,20,cad2);
tecla=getch();
tecla=tolower(tecla);
b=1; a=1;
      switch(tecla)
	   {

  case 'h':         setfillstyle(1,GREEN);
		    bar(400,23,420,40);
		    L=L-1;
		    gcvt(L,2,cad2);
		    outtextxy(410,20,cad2);
		    do{
		    setfillstyle(1,BLUE);
		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,80+i*25,125+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,80+i*25,125+j*25);

				switch(tecla)
				{
				case 0 : tecla=getch();
					 switch(tecla)
					{
					case 72: j--; break;
					case 80: j++; break;
					case 75: i--; break;
					case 77: i++; break;
					}
					if (i<0) i=0;
					if (i>8) i=8;
					if (j<0) j=0;
					if (j>9) j=9;
					break;

		       case 13:
		       valida=val(M,i,j);
		       if(valida==0)
		       {
		       mensaje();
		       ubicadestructor();
		       outtextxy(410,20,cad2);
		       }
				else
				{
				destructorH(i,j);
				c=c+1;
				a=0;
				M[i][j]=2;
				M[i+1][j]=2;
				A[i][j]=2;
				i=0;j=0;
				}
				break;

		     case 27: a=0; L=L+1;
			      i=4; j=4;
			      break;
		     }

	       }while(a!=0);
	       break;


  case  'v':        setfillstyle(1,GREEN);
		    bar(400,23,420,40);
		    L=L-1;
		    gcvt(L,2,cad2);
		    outtextxy(410,20,cad2);
		 do{
		    setfillstyle(1,BLUE);
		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,55+i*25,150+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,55+i*25,150+j*25);

			switch(tecla)
			{
			case 0 : tecla=getch();
				 switch(tecla)
				 {
				 case 72: j--; break;
				 case 80: j++; break;
				 case 75: i--; break;
				 case 77: i++; break;
				 }
				 if (i<0) i=0;
				 if (i>9) i=9;
				 if (j<0) j=0;
				 if (j>8) j=8;
				 break;

		     case 13:
		     valida=val2(M,i,j);
			if(valida==0)
			{
			mensaje();
			ubicadestructor();
			outtextxy(410,20,cad2);
			}
				else
				{
				destructorV(i,j);
				c=c+1;
				b=0;
				M[i][j]=5;
				M[i][j+1]=5;
				A[i][j]=5;
				i=0;j=0;
				}
				break;

		     case 27: b=0; L=L+1;
			      i=4; j=4;
			      break;

		     }

	       }while(b!=0);
	       break;

	    }

       }while(c<3);
a=0;c=0;b=0;L=4;
do{
ubicafragata();
gcvt(L,2,cad2);
outtextxy(410,20,cad2);
a=1;



		    setfillstyle(1,GREEN);
		    bar(400,23,420,40);
		    L=L-1;
		 do{
		    outtextxy(410,20,cad2);
		    setfillstyle(1,BLUE);
		    setcolor(BLUE);
		    rectangle(30+i*25,100+j*25,55+i*25,125+j*25);
		    tecla=getch();
		    setcolor(WHITE);
		    rectangle(30+i*25,100+j*25,55+i*25,125+j*25);


		    outtextxy(410,20,cad2);


		    switch(tecla)
		    {
		     case 0 :    tecla=getch();
				 switch(tecla)
					{
					case 72: j--; break;
					case 80: j++; break;
					case 75: i--; break;
					case 77: i++; break;
					}
					if (i<0) i=0;
					if (i>9) i=9;
					if (j<0) j=0;
					if (j>9) j=9;
					break;

		      case 13:
		      valida=val0(M,i,j);
			if(valida==0)
			{
			mensaje();
			ubicafragata();
			}
				else
				{
				fragata(i,j);
				c=c+1;
				a=0;
				M[i][j]=1;
				A[i][j]=1;
				}
				break;


		   }

	       }while(a!=0);

}while(c<4);

L=0;
setfillstyle(1,GREEN);
bar(400,23,420,40);
gcvt(L,2,cad2);
outtextxy(410,20,cad2);

z=0;


 do{
     n=rand()%(2);
     x=rand()%(10);
     y=rand()%(10);

	  switch(n)
	  {
	      case 0:   valida=val00(N,x,y);
			if(valida==1)
			{
			N[x][y]=1;
			z=z+1;
			}
			break;

	      case 1:  valida=val00(N,x,y);
				if(valida==1)
				{
				N[x][y]=1;
				z=z+1;
				}
				break;
	    }

     }while(z<4);

z=0;
 do{
     n=rand()%(2);
     x=rand()%(10);
     y=rand()%(10);

	  switch(n)
	  {
	      case 0:  valida=val7(N,x,y);
				if(valida==1)
				{
				N[x][y]=2;
				N[x+1][y]=2;
				z=z+1;
				}
				break;

	      case 1:  valida=val8(N,x,y);
				if(valida==1)
				{
				N[x][y]=5;
				N[x][y+1]=5;
				z=z+1;
				}
				break;
	    }

     }while(z<3);

z=0;
do{
     n=rand()%(2);
     x=rand()%(10);
     y=rand()%(10);

	  switch(n)
	  {
	      case 0:  valida=val9(N,x,y);
				if(valida==1)
				{
				N[x][y]=3;
				N[x+1][y]=3;
				N[x+2][y]=3;
				z=z+1;
				}
				break;

	      case 1:  valida=val10(N,x,y);
				if(valida==1)
				{
				N[x][y]=6;
				N[x][y+1]=6;
				N[x][y+2]=6;
				z=z+1;
				}
				break;

	      }

     }while(z<2);

z=0;
do{
     n=rand()%(2);
     x=rand()%(10);
     y=rand()%(10);

	  switch(n)
	  {
	      case 0:  valida=val11(N,x,y);
				if(valida==1)
				{
				N[x][y]=4;
				N[x+1][y]=4;
				N[x+2][y]=4;
				N[x+3][y]=4;
				z=z+1;
				}
				break;

	      case 1:  valida=val12(N,x,y);
				if(valida==1)
				{
				N[x][y]=7;
				N[x][y+1]=7;
				N[x][y+2]=7;
				N[x][y+3]=7;
				z=z+1;
				}
				break;

	    }

     }while(z<1);

box(30,370,600,460,1,GREEN);
outtextxy(30,400,"El enemigo esta colocando sus embarcaciones....");
delay(2000);
repinta(M,N,A);
instruccion();
settextstyle(2,0,6);
gcvt(puntuacionJ,3,cad);
outtextxy(550,50,cad);

i=0;j=0;
do{

	k=0;
	box(30,370,600,460,1,GREEN);
	outtextxy(30,400,"Selecciona la posicion para atacar y presiona enter");
	setcolor(RED);
	rectangle(330+i*25,100+j*25,355+i*25,125+j*25);
	tecla=getch();
	setcolor(WHITE);
	rectangle(330+i*25,100+j*25,355+i*25,125+j*25);
	tecla=tolower(tecla);
	switch(tecla)

	{
   case 'g':  guardar(M,N,G1,G2,turn1,turn2,d,e,puntuacionJ,P);
	      safe=1;
	      break;

   case 'r':
	      if(safe==1)
	      {
	      restaurar(M,N,G1,G2,turn1,turn2,d,e,puntuacionJ,P);
	      repinta(M,N,A);
	      instruccion();
	      gcvt(puntuacionJ,3,cad);
	      outtextxy(550,50,cad);
	      }
	      break;

   case 27:  won=1;
	     k=1;
	     break;

   case 0 :  tecla=getch();
	     switch(tecla)
	      {
	      case 72: j--;break;
	      case 80: j++;break;
	      case 75: i--;break;
	      case 77: i++;break;
	      }

		if (i<0) i=0;
		if (i>9) i=9;
		if (j<0) j=0;
		if (j>9) j=9;
		break;


   case 13:

		if(won!=1)
		{
		switch(N[i][j])
		{
		case 0: crossCPU(i,j);
			instruccion();
			puntuacionJ=puntuacionJ-5;
			if(puntuacionJ<0) puntuacionJ=0;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			box(30,370,600,460,1,GREEN);
			outtextxy(32,400,"Fallaste...");
			N[i][j]=11;
			delay(1000);
			box(30,400,600,460,1,GREEN);
			k=1;
			break;

		case 1: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+10;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;


				if(d==barcos)
				{
				won=1;
				ganajugador();
				k=1;
				}
				break;

		case 2: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+20;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;


				if(d==barcos)
				{
				won=1;
				ganajugador();
				k=1;
				}
				break;

		case 3: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+30;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;



				if(d==barcos)
				{
				won=1;
				ganajugador();
				k=1;
				}
				break;

		case 4: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+40;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;



				if(d==barcos)
				{
				won=1;
				ganajugador();
				k=1;
				}
				break;

		case 5: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+20;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;


				if(d==barcos)
				{
				won=1;
				ganajugador();
				k=1;
				}
				break;

		case 6: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+30;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;



				if(d==barcos)
				{
				won=1;
				ganajugador();
				k=1;
				}
				break;

		case 7: crossCPUA(i,j);
			instruccion();
			puntuacionJ=puntuacionJ+40;
			gcvt(puntuacionJ,3,cad);
			outtextxy(550,50,cad);
			ataqueJ(N,d,i,j);
			k=1;


			if(d==barcos)
			{
			won=1;
			ganajugador();
			k=1;
			}
			break;

		case 10: k=0;
			 break;

		case 11: k=0;
			 break;
	    }

	}
if(won!=1 && k==1)
{
   box(30,370,600,460,1,GREEN);
   outtextxy(32,400,"Mi turno....preparate");
   delay(1000);
   box(30,370,600,460,1,GREEN);
   delay(1000);

   q=rand()%(10);
   w=rand()%(10);

   while(M[q][w]==10 || M[q][w]==11)
   {
   q=rand()%(10);
   w=rand()%(10);
   }

   switch(M[q][w])
   {
   case 0:  crossJ(q,w);
	    box(30,370,600,460,1,GREEN);
	    outtextxy(32,400,"No te confies...fue suerte");
	    delay(1000);
	    box(30,400,600,460,1,GREEN);
	    M[q][w]=11;
	    box(30,370,600,460,1,GREEN);
	    outtextxy(30,400,"Selecciona la posicion para atacar y presiona enter");
	    break;

   case 1:  crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

   case 2:  crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

    case 3: crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

    case 4: crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

   case 5:  crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

   case 6:  crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

    case 7: crossJA(q,w);
	    movecpu(M,e,q,w);
	    if(e==barcos)
	    {
	    won=1;
	    ganacpu();
	    }
	    break;

	}

      }

    break;
   }

}while(won!=1);

//revelar barcos
for(i=0;i<10;i++)
   {
	for(j=0;j<10;j++)
	{
	  if(N[i][j]>0 && N[i][j]!=10 && N[i][j]!=11)
	  {
	  box(330+i*25,100+j*25,355+i*25,125+j*25,3,RED);
	  }
	}
    }
}
void instrucciones()
{
int i,j;
clearviewport();
box(0,0,640,480,1,BLUE);
settextstyle(0,0,1);                                                                         //
outtextxy(20,20,"El objetivo principal es hundir la flota del CPU antes de que la hunda a ti");
outtextxy(20,40,"De manera rapida el programa te pedira que coloques tus barcos, en total hay");
outtextxy(20,60,"10 barcos que colocoras en el orden de portaviones, submarino, destructor y ");
outtextxy(20,80,"Fragata.");
outtextxy(20,100,"Primero presionas la tecla 'v' o 'h' para poner un barco horizontal o  ");
outtextxy(20,120,"Vertical, despues presionar enter para colocarlo, y asi sucesivamente");
outtextxy(20,140,"cada barco tiene distinta puntuacion:");

i=2;j=3;
portavionesH(i,j);outtextxy(180,180,"Portaviones, si le aciertas tu puntuacion aumenta 40pts");

j=5;
submarinoH(i,j);outtextxy(180,240,"Submarino, si le aciertas tu puntuacion aumenta 30pts");


j=7;
destructorH(i,j);outtextxy(180,300,"Destructor, si le aciertas tu puntuacion aumenta 20pts");

j=9;
fragata(i,j);outtextxy(180,340,"Fragata, si le aciertas tu puntuacion aumenta 10pts");

outtextxy(0,460,"Precione cualquier tecla para regresar");




getch();
presentacion();
}
void acercade()
{
clearviewport();
box(0,0,640,480,1,RED);
settextstyle(0,0,1);
outtextxy(20,20,"Programador principal: Omar Valdivia");
outtextxy(20,40,"Diseno de interfaz grafica: Omar Valdivia");
outtextxy(20,60,"Escuela: Facultad de ciencias quimicas e ingenieria UABC");
outtextxy(20,80,"Materia: Programacion");
outtextxy(20,100,"Bueno, es el primer programa que he hecho a lo largo de mi vida");
outtextxy(20,120,"Si les seo sincero fue bastante dificl al principio porque definitivamente");
outtextxy(20,140,"yo no sabia nada de programacion, es mas, ni siquier sabia que era un codigo");
outtextxy(20,160,"de programacion. Todavia recuerdo la primera clase de laboratorio jajajajajaja");
outtextxy(20,180,"todos eramos nuevos, nadie sabia que onda, yo solo a mi solo me mataba la ");
outtextxy(20,200,"incertidumbre de saber que iba a pasar, pues resulta que el maestro nos");
outtextxy(20,220,"nos dio una pequna introduccion de lo que era la progrmacion, despues nos");
outtextxy(20,240,"nos explico una practica, apenas estabamos con los printf, el clrscr y por");
outtextxy(20,260,"el famoso getch, recuerdo cuando pude lograr que en la pantalla apareciera");
outtextxy(20,280,"la palabra HOLA CRAYOLA jajajajjaja ya me sentia un programdor profesional");
outtextxy(20,300,"pero nada que ver, la programacion es mucha pero mucha logica, este pequeno");
outtextxy(20,320,"juego de batalla naval me ayudo entender toda la programacion basica");
outtextxy(20,340,"terminaba desvelado progamando, primero tratando de poner un barco, despues");
outtextxy(20,360,"moverlo, luego que lo colocara, los arreglos.... en fin fue todo un show");
outtextxy(20,380,"lo mas gracioso que me paso al programar este juego, fue que hubo una ocacion");
outtextxy(20,400,"en que este juego no me corria, buscaba y buscaba y buscaba y nunca encontraba");
outtextxy(20,420,"el error, tarde como 3 horas en darme cuenta que faltaba ';'en un getch();");
outtextxy(20,440,"jajajajaja en fin... que disfrutes el juego!!!!.");
outtextxy(20,460,"preciona cualquier tecla para regresar.......");

getch();
presentacion();
}
void mueve()
{

int i=1;
char tecla;
  menu();
      do{

	  switch(i)
	  {

    case 1:    box(20,0,140,30,1,RED);
	       outtextxy(30,5, "JUGAR");
	       break;

    case 2:    box(150,0,280,30,1,RED);
	       outtextxy(160,5, "INSTRUCCIONES");
	       break;

    case 3:    box(290,0,410,30,1,RED);
	       outtextxy(325,5, "ACERCA DE");
	       break;

    case 4:    box(550,0,620,30,1,RED);
	       outtextxy(565,5, "SALIR");
	       break;
	  }
	tecla=getch();


	switch(i)
	{

    case 1:    box(20,0,140,30,1,BLACK);
	       outtextxy(30,5, "JUGAR");
	       break;

    case 2:    box(150,0,280,30,1,BLACK);
	       outtextxy(160,5, "INSTRUCCIONES");
	       break;

    case 3:    box(290,0,410,30,1,BLACK);
	       outtextxy(325,5, "ACERCA DE");
	       break;

    case 4:    box(550,0,620,30,1,BLACK);
	       outtextxy(565,5, "SALIR");
	       break;




	}

	   switch(tecla)
	   {

	     case 0: tecla=getch();

	      switch (tecla)
	      {
	      case 75 : i--; break;
	      case 77 : i++; break;
	      }
	      if (i > 4) i=1;
	      if (i < 1) i=4;
	      break; //fin de cero

	      case 13:  switch(i)

	     { case 1 : juega();
			break;
	       case 2 : instrucciones();
			break;
	       case 3 : acercade();
			break;
	       case 4 : tecla=27;
			break;

	      }
	       if (i !=4) menu();
	    break; //fin de enter

	   }


      }while ( tecla !=27);


}

void main()
{
randomize();
inicializa();
presentacion();
mueve();
}


