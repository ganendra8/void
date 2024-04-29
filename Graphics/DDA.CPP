#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd= DETECT,gm;
int x1,y1,x2,y2,dx,dy,x,y,i,steps;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"RESHI SHRESTHA";
cout<<"\nEnter the value of x1 and y1:";
cin>>x1>>y1;
cout<<"enter the value of x2 and y2:";
cin>>x2>>y2;

dx=(x2-x1);
dy=(y2-y1);
if(abs(dx) > abs(dy)){
steps=abs(dx);
}
else{
steps=abs(dy);
}
float xinc,yinc;
xinc=dx/steps;
yinc=dy/steps;

x=x1;
y=y1;
putpixel(x,y,RED);
for(i=1; i<=steps;i++){
x=x+xinc;
y=y+yinc;
putpixel(x,y,RED);
}
outtextxy(x1,y1,"(x1,y1)");
outtextxy(x2,y2,"(x2,y2)");

getch();
closegraph();
}