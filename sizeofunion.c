#include<stdio.h>
union stdinfo{
char name[10];
int pin;
float attendence;
};
void main()
{
    union stdinfo s;
    printf("give information about student\n");
    scanf("%s %d %f",s.name,&s.pin,&s.attendence);
    printf("size occupide by the union variable=%d",sizeof(s));
}