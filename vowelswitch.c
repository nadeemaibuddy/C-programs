#include<stdio.h>

void main()
{
char na;
printf("give any letter");
scanf("%c",&na);
switch (na)
{
    case 'a':
    printf("given letter is vowel");
    break;
    case 'e':
    printf("given letter is vowel");
    break;
    case 'i':
    printf("given letter is vowel");
    break;
    case 'o':
    printf("given letter is vowel");
    break;
    case 'u':
    printf("given letter is vowel");
    break;
    default:
    printf("given letter is consonent");
    break;
}

}