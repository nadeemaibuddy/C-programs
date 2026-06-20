#include<stdio.h>
#include<conio.h>

void main()
{
    char s1[6],s2[6];
    int len;
    printf("give any string");
    gets(s1);
    for(len=0;len<6;len++)
    {
        s2[len]=s1[len];
    }
    printf("origanal string");
puts(s1);
printf("copyed\n");
puts(s2);

}