#include <stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7};
    int *b,i;
    b=&a[0];
    for(i=0;i<7;i++)
    {
        printf("a[%d] is =%d\n",i,*(b+i));
    }
}