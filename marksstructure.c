#include<stdio.h>
struct marks{
int m,p,c;
};
void main()
{
    struct marks s;
    printf("enter marks of maths:");
    scanf("%d",&s.m);
     printf("enter marks of physics:");
     scanf("%d",&s.p);
      printf("enter marks of chemistry:");
      scanf("%d",&s.c);
      printf("total marks of mpc=%d",s.m+s.p+s.c);

}