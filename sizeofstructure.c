#include<stdio.h>
struct stdinfo{
char name[10];
int pin;
float attendence;
};
void main()
{
    struct stdinfo s;
    printf("give information about student\n");
    scanf("%s %d %f",s.name,&s.pin,&s.attendence);
    printf("size occupide by the structure variable=%d",sizeof(s));
}