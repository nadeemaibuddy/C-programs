#include<stdio.h>
struct array{
    char name[20];
    int salary;
    float att;
};
void main()
{
    int i,n;
    struct array s[20];
    printf("give number of people\n");
    scanf("%d",&n);
    printf("give name salary and attendence of persons");
    for(i=1;i<=n;i++)
   {
    scanf("%s %d %f",s[i].name,&s[i].salary,&s[i].att);
   } 
}