#include<stdio.h>

void main()
{
char na;
printf("given any letter");
scanf("%c",&na);
if((na=='a')||(na=='e')||(na=='i')||(na=='o')||(na=='u'))
{
    printf("given letter is vowel");
}
else
{
    printf("given letter is consonent");
}
}