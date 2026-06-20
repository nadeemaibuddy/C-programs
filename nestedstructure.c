#include<stdio.h>
void main()
{
    struct date{
        int date;
        char day[10];
        int year;
    };
    struct info{
        char name[10];
        int pin;
        int age;
        struct date d;
    };
    struct info s;
    printf("give student details \nname \npin \nage\n ");
    scanf("%s %d %d",s.name,&s.pin,&s.age);
    printf("give todays date\n");
    scanf("%d %s %d",&s.d.date,s.d.day,&s.d.year);
}