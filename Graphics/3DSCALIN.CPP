#include<iostream.h>
#include<math.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2,sx,sy;
int mx,my;
cout<<"enter the top value:";
cin>>x1>>y1;
cout<<"enter the bottom value:";
cin>>x2>>y2;
mx=(x1+x2)/2;
my=(y1+y2)/2;

bar3d(x1,y1,x2,y2,25,1);
outtextxy(x1+50,y1-15,"object");
cout<<"Enetr the scaling factor (sx,sy): ";
cin>>sx>>sy;
cleardevice();
int x3,y3,x4,y4;
x3= mx+(x1-mx)*sx;
y3=my+(y1-my)*sy;
x4=mx+(x2-mx)*sx;      p
y4=my+(y2-my)*sy;
bar3d(x3,y3,x4,y4,25,1);
outtextxy(x3+50,y3-15,"Image");
getch();
closegraph();
}