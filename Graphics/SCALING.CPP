#include<iostream.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd =DETECT, gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2,sx,sy;
cout<<"enter the value of x1 and y1: ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;
cout<<"enter the scaling value (sx,sy): ";
cin>>sx>>sy;
line(x1,y1,x2,y2);
outtextxy(x2,y2,"Object");
int x3,y3,x4,y4;
x3=x1*sx;
y3=y1*sy;
x4=x2*sx;
y4=y2*sy;
line(x3,y3,x4,y4);
outtextxy(x4,y4,"image");
getch();
closegraph();
}
