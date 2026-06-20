#include<stdio.h>
void main()
{
    int a=6;
    int *b;
    b=&a;
    printf("address of a=%u\n",b);
    printf("value of a=%d\n",*b);
    printf("(address of a %d + value of a %d)=%u",b,*b,b+*b);
}