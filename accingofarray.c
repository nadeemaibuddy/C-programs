#include<stdio.h>
void main()
{
int a[5],i;
printf("give elements of array");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
printf("given array is");
for(i=0;i<5;i++)
{
    printf("%d",a[i]);
}
}