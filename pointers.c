#include<stdio.h>
void main()
{
    int n=46;
    int *a;
    a=&n;
    printf("n=%d\n",*a);
    printf("address of n=%d\n",a);
    printf("address of pointer a=%d",&a);
    printf("size of pointer a=%d",sizeof(*a));
}