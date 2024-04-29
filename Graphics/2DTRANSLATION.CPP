#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd= DETECT,gm;//graphic diagram detect and
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2,x,y,tx,ty;
cout<<"Enter the value of x1 ang y1; ";
cin>>x1>>y1;
cout<<"enter the value of x2 and y2:";
cin>>x2>>y2;
cout<<"enter the value of translation vector:";
cin>>tx>>ty;
line(x1,y1,x2,y2);
outtextxy(x,y,"object");
int x3,y3,x4,y4;
x3=x1+tx;
y3=y1+ty;
x4=x2+tx;
y4=y2+ty;
line(x3,y3,x4,y4);
outtextxy(x4,y4,"Image");
getch();
closegraph();
}