#include<stdio.h>
void main()
{
    int age;
    printf("checking if your eligible for driving or not\nenter your age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("your eligible for driving");
    }
    else
    {
        printf("your not eligible for driving");
    }

}