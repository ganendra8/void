#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2,x3,y3,x4,y4;
float angle=0,t;
cout<<"enter the value of x1 and y1";
cin>>x1>>y1;
cout<<"enter the value of x2 and y2; ";
cin>>x2>>y2;
cout<<"Enter the angle for rotation:";
cin>>t;
line(x1,y1,x2,y2);
outtextxy(x2,y2,"object");
angle=t*(3.14/180);
x3=(x1*cos(angle))-(y1*sin(angle));
y3=(x1*sin(angle))+(y1*cos(angle));
x4=(x2*cos(angle))-(y2*sin(angle));
y4=(x2*sin(angle))+(y2*cos(angle));
line(x3,y3,x4,y4);
outtextxy(x4,y4,"image");
getch();
closegraph();
}

