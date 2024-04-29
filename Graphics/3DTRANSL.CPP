#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<process.h>
void main()
{
int gd= DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int l,t,r,b,d,tx,ty;
cout<<"rnter the value for top value:";
cin>>l>>t;
cout<<"enetr the bottom value:";
cin>>r>>b;
cout<<"enter value oftx and ty:";
cin>>tx>>ty;
bar3d(l,t,r,b,25,1);
outtextxy(l+50,t-15,"Object");
int l1,t1,r1,b1;
l1=l+tx;
t1=t+tx;
r1=r+ty;
b1=b+ty;
bar3d(l1,t1,r1,b1,25,1);
outtextxy(l1+50,t1-15,"Image");

getch();
closegraph();
}