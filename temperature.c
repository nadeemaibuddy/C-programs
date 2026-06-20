#include<stdio.h>
    void main()
    {
        float temp;
        int c;
        printf("Enter according to your choice\n1 To convert Celsius to Fahrenheit\n 2 To convert Fahrenheit to Celsius ");
        scanf("%d",&c);
        if(c==1)
        {
            printf("enter temperatur in Celsius");
            scanf("%f",&temp);
            printf("temperature in  Fahrenheit =%f",(temp * 9/5) + 32);
        }
        if(c==2)
        {
             printf("enter temperatur in Fahrenheit");
            scanf("%f",&temp);
            printf("temperature in  Ceuslsi =%f",(temp-32) * 5/9);
        }
    }