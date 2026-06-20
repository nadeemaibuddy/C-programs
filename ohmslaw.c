#include<stdio.h>
void main() 
{
int v,i,r,r1,r2,r3,V,I,R,a;
printf("This program is to find voltage\nor current\nor resistance\nor resistance in parallel circute\nor resistance in parallel circute");
printf("Enter \n1 to find voltage\n2 to find current\n3 to find current\n4 to find resistance in series circute\n5 to find resistance in parallel circute");
scanf("%d",&a);
if(a==1)
{
printf("Enter resistance and current");
scanf("%d%d",&r,&i);
V=i*r;
printf("Voltage=%d",V);
}
else
if(a==2)
{
printf("Enter current and voltage");
scanf("%d%d",&i,&v);
R=v/i;
printf("Resistance=%d",R);
}
else
if(a==3)
{
printf("Enter resistance and voltage");
scanf("%d%d",&r,&v);
I=v/r;
printf("Current=%d",I);
}
else
if(a==4)
{
printf("Enter resistance");
scanf("%d%d%d",&r1,&r2,&r3);
R=r1+r2+r3;
printf("Resistance=%d",R);
}
else
if(a==5)
{
printf("Enter resistance");
scanf("%d%d",&r1,&r2,&r3);
R=r1+r2+r3/(r1*r2)+(r2*r3)+(r3*r1);
printf("Resistance=%d",R);
}
}