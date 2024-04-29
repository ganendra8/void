#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x,y,h,k;
float p1,p2,rx,ry;
cout<<"enter the value for center (h,k): ";
cin>>h>>k;
cout<<"enter the value for radius rx and ry: ";
cin>>rx>>ry;
x=0;
y=ry;
//region1//
p1=(pow(ry,2))-(pow(rx,2)*ry)+(0.25*pow(rx,2));
while((2*pow(ry,2)*x) < (2*pow(rx,2)*y)){
putpixel(x+h,y+k,RED);
putpixel(-x+h,-y+k,RED);
putpixel(x+h,-y+k,RED);
putpixel(-x+h,y+k,RED);
delay(100);
x++;
if(p1<0){
p1=p1+2*(pow(ry,2)*x)+(pow(ry,2));
}
else{
y--;
p1=p1+2*(pow(ry,2)*x)+(pow(ry,2))-2*(pow(rx,2)*y);
}
}
//region2//
//x++;
//\y++;
p2= pow(ry,2)*(pow((x+1/2),2))+ (pow(rx,2))*(pow((y-1),2))-(pow(rx,2)*pow(ry,2));
while(y>=0){
y--;
if(p2>0){

p2=p2-2*(pow(rx,2))*(y-1)+(pow(ry,2));
}
else{
x++;
y--;
p2=p2+2*(pow(ry,2)*x)-2*pow(rx,2)*y+(pow(rx,2));
}
putpixel(x+h,y+k,RED);
putpixel(-x+h,-y+k,RED);
putpixel(x+h,-y+k,RED);
putpixel(-x+h,y+k,RED);
delay(100);
}

getch();
closegraph();
}