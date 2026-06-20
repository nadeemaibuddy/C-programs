#include<stdio.h>

void main()
{
int a, i=1;
printf("Guess the number game");
printf("\nEnter any number of your choise");
printf(" You have 5 attempts");
while(i<=5)
{
scanf("%d",&a);
if(a!=4) 
{
if(a>4)
{
printf("Given number is too high");
}
else
printf("Given number is too low");
}
else
{
printf("You have guess correct the number is 4");
break;
}
i=i+1;
}
if(i>=5) 
{
printf("\nYou have taken 5 attempts better luck next time");
}
}