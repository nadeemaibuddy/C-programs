#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,e;
    char f[100],g[100];

    printf("Enter your name\n");
    scanf("%s",&f);
    printf("\nEnter your collage code\n");
    scanf("%d",&a);
    printf("\nEnter your course\n");
    scanf("%s",&g);
    printf("\nEnter your pin\n");
    scanf("%d",&b);
    printf("\nEnter your date of birth");
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    printf("\nI am %s studying in Government Polytecnic collage Nizamabad",f);
    printf("My pin number is %d-%s-%d",a,g,b);
    printf("My date of birth %d/%d/%d",c,d,e);
}