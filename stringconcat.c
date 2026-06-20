#include<stdio.h>
#include<conio.h>
void main()
{
char s1[15],s2[15];
int len,i;
printf("give string 1\n");
gets(s1);
puts(s1);
printf("give string 2");
gets(s2);
puts(s2);
len=0;
while(s1[len]!='\0')
{
    len++;
}
for(i=0;s2[i]!='\0';i++,len++)
{
s1[len]=s2[i];

}
puts(s1);
}