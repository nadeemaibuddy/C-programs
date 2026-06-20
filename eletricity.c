#include<stdio.h>
void main()
{
    int watt;
    printf("enter how many kilowatts is consumed:");
    scanf("%d",&watt);
    if(watt<=200)
    {
        printf("you dont need to pay the bill as it is free from government");
    }
    else{
        printf("you have to pay the bill as you consumed above the limite given by the government");
    }
}