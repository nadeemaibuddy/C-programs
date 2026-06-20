#include<stdio.h>
void main()
{
    int a[5],i,sum=0,avg;
    printf("give elements of array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    avg=sum/5;
    printf("sum=%d\navg=%d",sum,avg);
}