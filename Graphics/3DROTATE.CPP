#include<iostream.h>
#include<math.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2,mx,my;
int angle,t;
cout<<"enter the top value:";
cin>>x1>>y1;
cout<<"enter the bottom value:";
cin>>x2>>y2;
mx=(x1+x2)/2;
my=(y1+y2)/2;
bar3d(x1,y1,x2,y2,25,1);
outtextxy(x1+50,y1-15,"object");
cout<<"enter the angle for rotation: ";
cin>>t;
cleardevice();
angle=t*(3.14/180);
int a1,b1,a2,b2;
a1=(mx+(x1-mx)*cos(angle)-((y1-my)*sin(angle)));
b1=(my+(x1-mx)*sin(angle)+((y1-my)*cos(angle)));
a2=(mx+(x2-mx)*cos(angle)-((y2-my)*sin(angle)));
b2=(my+(x2-mx)*sin(angle)+((y2-my)*cos(angle)));
bar3d(a1,b1,a2,b2,25,1);
outtextxy(a1+50,b1-15,"Image");
getch();
closegraph();
}