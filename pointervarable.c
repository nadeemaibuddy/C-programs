#include<stdio.h>
void add(int *,int *);
void main()
{
    int x=10,y=20;
    add(&x,&y);
}
void add(int *a,int *b)
{
    *a+=5;
    *b+=5;
    printf("%d\n%d",*a,*b);
    printf("%d\n%d\n",a,b);
    printf("%d\n%d",&a,&b);
}