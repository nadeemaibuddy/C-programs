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
int i,lar;

lar=x[0];
for(i=0;i<6;i++)
{
    if(lar<x[i])
    {
        lar=x[i];
    }
}
printf("%d",lar);
}