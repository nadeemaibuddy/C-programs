#include<stdio.h>
void main()
{
    int x,y,sum;
    printf("enter two digit number\n");
    printf("enter first digit:");
    scanf("%d",&x);
    printf("enter second digit");
    scanf("%d",&y);
    sum=x+y;
    printf("sum of digits in given number=%d",sum);
}