#include<stdio.h>
#include<conio.h>

void main()
{
    char ch[100];
    int length;
    printf("enter your string");
    gets(ch);
    printf("\n");
    puts(ch);
    length=0;
    while (ch[length]!='\0')
    {
        length++;
    }
    printf("%d",length);    
}