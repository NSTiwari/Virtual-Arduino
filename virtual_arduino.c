#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
arduino_on();
arduino_body();
arduino_connect();
getch();
cleardevice();
return 0;
}
arduino_on()
{
char a;
printf("Press any key and tap enter twice to switch on Arduino\n");
scanf("%c",&a);
getch();
cleardevice();
return 0;
}
arduino_body()
{
line(30,40,613,40);
line(30,40,30,100);
line(613,40,613,120);
line(613,120,630,145);
line(630,145,630,370);
line(30,400,600,400);
line(600,400,600,380);
line(600,380,630,370);
line(30,140,30,400);


circle(615,160,8);
rectangle(580,185,605,245);
rectangle(585,195,590,200);
rectangle(595,195,600,200);
rectangle(585,210,590,215);
rectangle(595,210,600,215);
rectangle(585,225,590,230);
rectangle(595,225,600,230);
rectangle(560,200,570,230);
line(560,210,570,210);
line(560,206,570,206);
line(560,216,570,216);
line(560,225,570,225);
rectangle(270,280,570,320);
rectangle(280,275,290,280);
rectangle(300,275,310,280);
rectangle(320,275,330,280);
rectangle(340,275,350,280);
rectangle(360,275,370,280);
rectangle(380,275,390,280);
rectangle(400,275,410,280);
rectangle(420,275,430,280);
rectangle(440,275,450,280);
rectangle(460,275,470,280);
rectangle(480,275,490,280);
rectangle(500,275,510,280);
rectangle(520,275,530,280);
rectangle(540,275,550,280);
rectangle(370,240,390,250);
rectangle(370,255,390,263);
rectangle(170,375,210,390);
line(180,375,180,390);
line(200,375,200,390);
rectangle(280,320,290,325);
rectangle(300,320,310,325);
rectangle(320,320,330,325);
rectangle(340,320,350,325);
rectangle(360,320,370,325);
rectangle(380,320,390,325);
rectangle(400,320,410,325);
rectangle(420,320,430,325);
rectangle(440,320,450,325);
rectangle(460,320,470,325);
rectangle(480,320,490,325);
rectangle(500,320,510,325);
rectangle(520,320,530,325);
rectangle(540,320,550,325);
rectangle(390,330,410,338);
line(310,340,420,340);
rectangle(215,375,455,390);
rectangle(465,375,585,390);
line(275,375,275,390);
line(305,375,305,390);
line(340,375,340,390);
line(365,375,365,390);
line(395,375,395,390);
line(425,375,425,390);
line(230,375,230,390);
line(485,375,485,390);
line(505,375,505,390);
line(525,375,525,390);
line(545,375,545,390);
line(565,375,565,390);
line(470,340,580,340);


rectangle(150,180,160,185);
rectangle(165,180,175,185);
rectangle(180,180,190,185);
line(150,195,190,195);
arc(190,205,-90,90,10);
arc(150,205,-270,270,10);
line(150,215,190,215);
rectangle(160,225,180,240);
rectangle(165,280,170,300);
rectangle(190,280,200,300);
rectangle(220,280,225,300);
rectangle(110,70,120,100);
line(110,80,120,80);
line(110,90,120,90);
rectangle(105,110,125,115);
rectangle(105,130,125,135);
rectangle(105,145,125,165);
rectangle(105,175,125,180);
rectangle(135,180,145,185);
rectangle(40,180,80,250);
line(40,200,80,200);
line(40,230,80,230);
rectangle(90,220,100,240);
rectangle(90,260,120,300);
rectangle(120,265,130,270);
rectangle(120,275,130,280);
rectangle(120,285,130,290);
rectangle(70,270,90,290);
rectangle(20,330,30,380);
rectangle(30,335,80,377);

line(390,282,415,282);
line(380,293,415,293);





rectangle(60,60,90,90);
rectangle(50,66,60,69);
rectangle(90,66,100,69);
rectangle(50,74,60,77);
rectangle(50,83,60,86);
rectangle(90,83,100,86);
circle(610,350,8);
circle(75,75,8);
circle(130,60,6);
rectangle(130,70,190,95);
rectangle(145,75,150,80);
rectangle(160,75,165,80);
rectangle(175,75,180,80);
rectangle(145,85,150,90);
rectangle(160,85,165,90);
rectangle(175,85,180,90);
line(160,100,180,100);
arc(180,105,-90,90,5);
arc(160,105,-270,270,5);
line(160,110,180,110);
circle(175,105,2);
circle(165,105,2);
line(160,115,180,115);
arc(180,120,-90,90,5);
arc(160,120,-270,270,5);
line(160,125,180,125);
circle(175,120,2);
circle(165,120,2);
rectangle(160,140,180,160);


rectangle(80,90,90,95);
rectangle(10,100,90,140);
line(70,100,70,140);
arc(50,100,0,180,8);
arc(50,140,180,360,8);
rectangle(140,55,440,65);
rectangle(443,55,603,65);
line(170,55,170,65);
line(200,55,200,65);
line(230,55,230,65);
line(260,55,260,65);
line(290,55,290,65);
line(320,55,320,65);
line(350,55,350,65);
line(380,55,380,65);
line(410,55,410,65);
line(463,55,463,65);
line(483,55,483,65);
line(503,55,503,65);
line(523,55,523,65);
line(543,55,543,65);
line(563,55,563,65);
line(583,55,583,65);
rectangle(245,90,270,100);

line(260,110,600,110);
rectangle(245,120,270,130);
rectangle(250,132,265,152);
rectangle(245,155,270,165);
outtextxy(220,158,"TX");
rectangle(245,168,270,178);
rectangle(245,200,270,210);
rectangle(245,215,270,225);
rectangle(245,230,270,245);
rectangle(250,250,266,270);
circle(140,380,8);

circle(210,350,20);
circle(160,350,20);
circle(235,110,2);
circle(235,135,2);
circle(280,130,2);
circle(280,170,2);
outtextxy(233,122,"L");

line(440,130,480,130);
line(440,150,480,150);
arc(480,140,-90,90,10);
arc(440,140,-270,270,10);

rectangle(495,150,515,160);

rectangle(498,162,510,182);
line(498,167,510,167);
line(498,172,510,172);
line(498,177,510,177);



setfillstyle(SOLID_FILL,BLUE);
floodfill(300,350,WHITE);
floodfill(445,140,WHITE);
floodfill(170,119,WHITE);
floodfill(170,105,WHITE);

setfillstyle(SOLID_FILL,WHITE);
floodfill(405,322,WHITE);
floodfill(285,322,WHITE);
floodfill(305,322,WHITE);
floodfill(325,322,WHITE);
floodfill(345,322,WHITE);
floodfill(365,322,WHITE);
floodfill(385,322,WHITE);
floodfill(425,322,WHITE);
floodfill(445,322,WHITE);
floodfill(465,322,WHITE);
floodfill(485,322,WHITE);
floodfill(505,322,WHITE);
floodfill(525,322,WHITE);
floodfill(545,322,WHITE);
floodfill(405,278,WHITE);
floodfill(285,278,WHITE);
floodfill(305,278,WHITE);
floodfill(325,278,WHITE);
floodfill(345,278,WHITE);
floodfill(365,278,WHITE);
floodfill(385,278,WHITE);
floodfill(425,278,WHITE);
floodfill(445,278,WHITE);
floodfill(465,278,WHITE);
floodfill(485,278,WHITE);
floodfill(505,278,WHITE);
floodfill(525,278,WHITE);
floodfill(545,278,WHITE);
floodfill(500,165,WHITE);
floodfill(500,179,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(45,195,WHITE);
floodfill(45,240,WHITE);
setfillstyle(SOLID_FILL,-8);
floodfill(205,340,WHITE);
floodfill(148,205,WHITE);
floodfill(150,340,WHITE);
setfillstyle(SOLID_FILL,-9);
floodfill(380,245,WHITE);
floodfill(380,260,WHITE);
floodfill(130,90,WHITE);
floodfill(250,95,WHITE);
floodfill(115,132,WHITE);
floodfill(115,112,WHITE);
floodfill(115,155,WHITE);
floodfill(115,178,WHITE);
floodfill(140,183,WHITE);
floodfill(155,183,WHITE);
floodfill(170,183,WHITE);
floodfill(185,183,WHITE);
floodfill(250,205,WHITE);
floodfill(95,230,WHITE);
floodfill(250,220,WHITE);
floodfill(250,240,WHITE);
floodfill(255,260,WHITE);
floodfill(175,380,WHITE);
floodfill(85,280,WHITE);
floodfill(205,380,WHITE);
floodfill(598,198,WHITE);
floodfill(598,213,WHITE);
floodfill(598,228,WHITE);
floodfill(588,198,WHITE);
floodfill(588,213,WHITE);
floodfill(588,228,WHITE);
floodfill(510,153,WHITE);
floodfill(45,144,WHITE);
floodfill(45,98,WHITE);
floodfill(253,122,WHITE);
floodfill(253,135,WHITE);
floodfill(250,173,WHITE);
floodfill(250,163,WHITE);
floodfill(148,78,WHITE);
floodfill(163,78,WHITE);
floodfill(178,78,WHITE);
floodfill(148,88,WHITE);
floodfill(163,88,WHITE);
floodfill(178,88,WHITE);
floodfill(85,85,WHITE);
floodfill(400,335,WHITE);
floodfill(45,120,WHITE);
floodfill(75,120,WHITE);
setfillstyle(SOLID_FILL,12);
floodfill(80,80,WHITE);
outtextxy(300,200,"A r d u i n o");
outtextxy(440,100,"DIGITAL (PWM~) TX RX");
outtextxy(518,153,"ON");
outtextxy(442,138,"U N O");
outtextxy(220,171,"RX");
outtextxy(200,70,"AREF");
outtextxy(235,70,"GND");
outtextxy(270,70,"13");
outtextxy(300,70,"12");
outtextxy(330,70,"11");
outtextxy(360,70,"10");
outtextxy(390,70,"9");
outtextxy(420,70,"8");
outtextxy(450,70,"7");
outtextxy(470,70,"6");
outtextxy(490,70,"5");
outtextxy(510,70,"4");
outtextxy(530,70,"3");
outtextxy(550,70,"2");
outtextxy(570,70,"1");
outtextxy(590,70,"0");
outtextxy(578,175,"ICSP");
outtextxy(380,285,"ATMEL 35473D");
outtextxy(350,295,"A T M E G A 3 2 8 P U");
outtextxy(380,305,"1 7 4 P C 5");
outtextxy(380,345,"POWER");
outtextxy(500,345,"ANALOG IN");
outtextxy(235,365,"IOREF");
outtextxy(280,365,"RST");
outtextxy(310,365,"3.3V");
outtextxy(350,365,"5V");
outtextxy(370,365,"GND");
outtextxy(400,365,"GND");
outtextxy(430,365,"V1n");
outtextxy(470,365,"A0");
outtextxy(490,365,"A1");
outtextxy(510,365,"A2");
outtextxy(530,365,"A3");
outtextxy(550,365,"A4");
outtextxy(570,365,"A5");
outtextxy(184,380,"M7");
outtextxy(155,335,"CK");
outtextxy(155,345,"47");
outtextxy(150,355,"25V");
outtextxy(205,335,"CK");
outtextxy(205,345,"47");
outtextxy(200,355,"25V");
outtextxy(130,118,"JP2");
outtextxy(158,132,"|||");
outtextxy(158,162,"|||");
outtextxy(155,140,"-");
outtextxy(155,145,"-");
outtextxy(155,150,"-");
outtextxy(155,155,"-");
outtextxy(180,140,"-");
outtextxy(180,145,"-");
outtextxy(180,150,"-");
outtextxy(180,155,"-");
outtextxy(155,225,"-");
outtextxy(155,230,"-");
outtextxy(155,235,"-");
outtextxy(180,225,"-");
outtextxy(180,230,"-");
outtextxy(180,235,"-");
outtextxy(185,280,"-");
outtextxy(185,285,"-");
outtextxy(185,290,"-");
outtextxy(185,295,"-");
outtextxy(146,203,"16.000");
outtextxy(45,210,"507H");
outtextxy(100,220,"-");
outtextxy(100,225,"-");
outtextxy(100,235,"-");
outtextxy(100,230,"-");
getch();
cleardevice();
return 0;
}
arduino_connect()
{
int e,option;
char s[100],S[100],i,max=40,min=15;
printf("1.LM35 Temperature Sensor\n2.LCD");
printf("\n\nChoose your option\n");
scanf("%d",&option);
printf("\n\nPress any key to connect the wires\n");
switch(option)
{
case 1:
getch();
cleardevice();
setcolor(03);                //blue wire connected to PC
line(0,120,20,120);
line(0,121,20,121);
line(0,122,20,122);
line(0,123,20,123);
line(0,124,20,124);
line(0,124,0,0);
line(1,124,1,0);
line(2,124,2,0);
line(3,124,3,0);
setcolor(WHITE);
outtextxy(10,10,"PC");
setcolor(RED);              //red wire connected to A0
line(475,370,475,450);
line(476,370,476,450);
line(477,370,477,450);
line(475,450,570,450);
line(475,451,570,451);
line(475,452,570,452);
setcolor(GREEN);            //green wire connected to GND
line(410,370,410,460);
line(411,370,411,460);
line(412,370,412,460);
line(410,460,570,460);
line(410,461,570,461);
line(410,462,570,462);
setcolor(YELLOW);          //yellow wire connected to 5V
line(355,370,355,440);
line(356,370,356,440);
line(357,370,357,440);
line(355,440,570,440);
line(355,441,570,441);
line(355,442,570,442);
setcolor(WHITE);           //LM35 Temperature Sensor
line(580,430,580,470);
line(580,430,590,430);
line(580,470,590,470);
arc(590,450,-90,90,20);
outtextxy(585,440,"LM");
outtextxy(585,450,"35");
setcolor(WHITE);               //LM35 three terminals
line(570,450,580,450);
line(570,451,580,451);
line(570,452,580,452);
line(570,440,580,440);
line(570,441,580,441);
line(570,442,580,442);
line(570,460,580,460);
line(570,461,580,461);
line(570,462,580,462);
setcolor(WHITE);
arduino_body();
cleardevice();
for(i=0;i<1;i++)
{
int e=(rand()+min)%(max+1);
setcolor(GREEN);
setcolor(GREEN);
sprintf(S,"%d C",e);
outtextxy(240,230,S);
rectangle(200,220,300,250);
setcolor(WHITE);
outtextxy(130,200,"Room temperature on LED Screen is");

}
break;
case 2:
getch();
cleardevice();
rectangle(100,0,600,30);
setcolor(03);                //blue wire connected to PC
line(0,120,20,120);
line(0,121,20,121);
line(0,122,20,122);
line(0,123,20,123);
line(0,124,20,124);
line(0,124,0,0);
line(1,124,1,0);
line(2,124,2,0);
line(3,124,3,0);
setcolor(WHITE);
outtextxy(10,10,"PC");
setcolor(RED);          //red wire connected to 5V
line(355,370,355,440);
line(356,370,356,440);
line(357,370,357,440);
line(355,440,620,440);
line(355,441,621,441);
line(355,442,622,442);
line(620,440,620,39);
line(621,441,621,38);
line(622,442,622,37);
line(620,39,180,39);
line(621,38,180,38);
line(622,37,180,37);
line(180,39,180,30);
line(181,40,181,30);
line(182,41,182,30);

setcolor(GREEN);            //green wire connected to GND
line(375,370,375,430);
line(376,370,376,430);
line(377,370,377,430);
line(377,430,615,430);
line(376,431,615,431);
line(375,432,615,432);
line(615,430,615,36);
line(616,431,616,35);
line(617,432,617,34);
line(615,36,220,36);
line(616,35,220,35);
line(617,34,220,34);
line(220,36,220,30);
line(221,35,221,30);
line(222,34,222,30);
setcolor(YELLOW);            //yellow wire connected to 5
line(490,65,490,30);
line(491,65,491,30);
line(492,65,492,30);
setcolor(12);                //orange wire connected to 4
line(510,65,510,30);
line(511,65,511,30);
line(512,65,512,30);
setcolor(BROWN);           //brown wire connected to 3
line(530,65,530,30);
line(531,65,531,30);
line(532,65,532,30);
setcolor(10);                //light green wire connected to 2
line(550,65,550,30);
line(551,65,551,30);
line(552,65,552,30);
setcolor(07);                     //grey wire connected to 12
line(300,65,300,30);
line(301,65,301,30);
line(302,65,302,30);
setcolor(05);                      //pink wire connected to 11
line(330,65,330,30);
line(331,65,331,30);
line(332,65,332,30);
setcolor(WHITE);
outtextxy(545,20,"D7");
outtextxy(525,20,"D6");
outtextxy(505,20,"D5");
outtextxy(485,20,"D4");
outtextxy(465,20,"D3");
outtextxy(445,20,"D2");
outtextxy(425,20,"D1");
outtextxy(405,20,"D0");
outtextxy(330,20,"E");
outtextxy(310,20,"RW");
outtextxy(290,20,"RS");
outtextxy(210,20,"VDD VEE");
outtextxy(170,20,"VSS");
setcolor(GREEN);
outtextxy(110,10,"LCD");
setcolor(WHITE);
arduino_body();
cleardevice();
printf("Enter text code in Arduino\n");
scanf("%s",s);
setcolor(GREEN);
rectangle(80,220,250,250);
outtextxy(150,230,s);
break;
}
getch();
return 0;
}
