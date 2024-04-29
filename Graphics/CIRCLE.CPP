#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph (&gd,&gm,"c:\\turboc3\\bgi");
int r,h,k,p,x,y;
cout<<"enter the radius: ";
cin>>r;
cout<<"enter the center of circle: ";
cin>>h>>k;
x=0;
y=r;
p=1-r;
putpixel(x,y,RED);
while(x<=y)
{
putpixel(x+h,y+k,RED);
putpixel(y+k,x+h,RED);
putpixel(-y+k,x+h,RED);
putpixel(-x+h,y+k,RED);
putpixel(-x+h,-y+k,RED);
putpixel(-y+k,-x+h,RED);
putpixel(y+k,-x+h,RED);
putpixel(x+h,-y+k,RED);
x++;
if(p<0){
p=p+2*x+1;
}
else{
y--;
p=p+2*x-2*y+1;
}
delay(100);
}
getch();
closegraph();
}