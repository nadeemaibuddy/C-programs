#include<stdio.h>
void main()
{
    int a=10;
    int *b;
    int **c;
    b=&a;
    c=&b;
    printf("address of a=%u\n",&a);
    printf("address of a=%u\n",b);
    printf("address of b=%u\n",c);
    printf("address of c=%u\n",&c);
    printf("value of a=%d\n",a);
    printf("value of a=%d\n",*b);
    printf("value of b=%d\n",**c);
}