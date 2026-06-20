#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char s1[10],s2[10],s3[10],result;
int r;
printf("give two string");
gets(s1);
gets(s2);
printf("string concantion\n");
strcat(s1,s2);
puts(s1);
printf("string copy\n");
strcpy(s3,s1);
puts(s3);
printf("string compare\n");
r=strcmp(s1,s2);
printf("%d",r);

}