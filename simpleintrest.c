#include<stdio.h>
void main()
{
int p,t,r,s;
printf("This program is to find simple intrest");
printf("Enter the values of\np\nt\nr\n");
scanf("%d%d%d",&p,&t,&r);
printf("Entered values are\np=%d\nt=%d\nr=%d ",p,t,r);
s=p*t*r/100;
printf("Simple intrest=%d",s);
}