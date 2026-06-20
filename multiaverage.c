#include<stdio.h> 

void main()
{
int m,p,c,mul,avg,tot;
printf("give marks of three subject");
scanf("%d%d%d",&m,&p,&c);
tot=m+p+c;
mul=m*p*c;
avg=tot/2;
printf("total=%d multiplaction=%d average=%d",tot,mul,avg);




}
