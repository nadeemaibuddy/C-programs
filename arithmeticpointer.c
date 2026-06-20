#include<stdio.h>
void main()
{
    int a=10,b=20;
    int *c,*d;
    c=&a;
    d=&b;
    printf("address in c=%u\n",c);
    printf("now address in c=%u\n",c+5);
    printf("now address in c=%u\n",c-5);
    printf("value in c=%d\n",*c);
    printf("address in d=%u\n",d);
    printf("now address in d=%u\n",d+5);
    printf("now address in d=%u\n",d-5);
    printf("difference of to address=%u\n",d-c);
     printf("value in d=%d",*d);

}