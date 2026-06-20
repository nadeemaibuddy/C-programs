#include<stdio.h>
struct add{
int boys,girls;
};
void main()
{
    struct add s;
    printf("enter numbers of girls and boys");
    scanf("%d %d",&s.boys,&s.girls);
    printf("total students=%d",s.boys+s.girls);
}