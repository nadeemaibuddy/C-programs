#include<stdio.h>

void main()
{
int a,b,c,d,lcm,r;
printf("This programm is to find lcm of two number");
printf("Give two number");
scanf("%d%d",&a,&b);
do{
r=a%b;
a=b;
b=r;
}
while(r!=0);

lcm=(a*b)/r;
printf("%d",lcm);
}