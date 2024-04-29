#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1,y1,x2,y2,x3,y3,x4,y4,shx,shy;
char ch;
cout<<"Enter the value of x1 and y1: ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;
line(x1,y1,x2,y2);
cout<<"enter the direction of shearing either X or Y: ";
cin>>ch;
if(ch=='X')
{
cout<<"enter the shearing factor for x-direction: ";
cin>>shx;
x3= x1+shx*y1;
x4= x2+shx*y2;
line(x3,y1,x4,y2);
}
else{
cout<<"enter the shearing factor for y-direction: ";
cin>>shy;
y3=y1+shy*x1;
y4=y2+shy*x2;
line(x1,y3,x2,y4);
}
getch();
closegraph();
}
