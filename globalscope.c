#include<stdio.h>
int a=4,b=5;
void global();
void main()
{
    printf("this is example for global scope\n");
    printf("a+b=%d\n",a+b);
    global();
}
void global()
{
    printf("a+b=%d",a+b);
}
