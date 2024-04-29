#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x,y,x0,y0,x1,y1,p,dx,dy,xend;
int gd = DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"Bresenham's line drawring algorothm"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"enter the value of x0 and y0: ";
cin>>x0>>y0;
cout<<"Enter the value of x1 and y1: ";
cin>>x1>>y1;
x=x1;
y=y1;
dx= x1-x0;
dy=y1-y0;
p=2*dy-dx;
if(x1>x0){
x= x0;
y=y0;
xend = x1;
}
else{
x= x1;
y= y1;
xend = x0;
}
putpixel(x,y,RED);
while(x < xend) {
x++;
if(p<0){
p=p+2*dy;
}
else{
y++;
p=p+2*dy-2*dx;
putpixel(x,y,RED);
}
}
getch();
closegraph();
}