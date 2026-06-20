#include<stdio.h>
int fbi(int);
void main()
{
    int i,n,result;
    printf("give range");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      result=fbi(i);
      printf("%d\n",result);
    }
}
int fbi(int i)
{
    if(i==0)
    return 0;
    if(i==1)
    return 1;
    else
    return fbi(i-1)+fbi(i-2);
    
}
