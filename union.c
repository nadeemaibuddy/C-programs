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
    printf("NAME:%s\nPIN:%d \nATTENDENCE:%f",s.name,s.pin,s.attendence);
}