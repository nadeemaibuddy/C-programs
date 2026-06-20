#include<stdio.h>
struct info
{
    char name[10];
    int pin;
    float att;
}s1={"nadeem",8,74.5};;
void main()
{
printf("STUDENT INFO\n");
printf("%s\n%d\n%f",s1.name,s1.pin,s1.att);

}