#include<stdio.h>
int div(int,int);
void main()
{
 int result;
 int a,b,c;
 printf("give two number");
 scanf("%d%d",&a,&b);
 div(a,b);

}
int div(int x,int y)
{
   int c;
    c=x/y;
   printf("%d",c);
}