#include<stdio.h>
void main()
{
    int m;
    printf("enter your mark of c programming:");
    scanf("%d",&m);
    if(m==20)
    {
        printf("great keep it up");
    }
    if((m>=15)&&(m<=19))
    {
        printf("good you can perform better");
    }
    if((m>=11)&&(m<15))
    {
        printf("you can perform better");
    }
    if(m<=10)
    {
        printf("you need to improve more");
    }
}