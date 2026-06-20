#include<stdio.h>

void main()
{
int a,b,c,d;
printf("enter your passoward");
scanf("%d%d%d%d",&a,&b,&c,&d);
if((a==1)&&(b==4)&&(c==2)&&(d==8))
{
    printf("access granted");
}
else
{
    printf(" incorrect password");
}
}