#include<stdio.h>
int arr(int[]);
void main()
{
int a[6],i;
printf("give elements of array");
for(i=0;i<6;i++)
{
    scanf("%d",&a[i]);
}
arr(a);
}
int arr(int x[])
{
int i;
printf("given array is\n");
for(i=0;i<6;i++)
{
    printf("%d",x[i]);
}
}