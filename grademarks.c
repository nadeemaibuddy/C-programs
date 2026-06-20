#include<stdio.h>
void main()
{
    int m,j,i,a,f=0;
    float p,average,sum=0;
    for(i=1;i<=6;i++)
    {
        printf("give %d subject marks",i);
        scanf("%d",&m);
        if(m>=91)
        {
            p=10;
        }
         else if(m>=81)
        {
            p=9;
        }
         else if(m>=71)
        {
            p=8;
        }
         else if(m>=61)
        {
            p=7;
        }
         else if(m>=51)
        {
            p=6;
        }
         else if(m>=41)
        {
            p=5;
        }
         else
         {
            f=1;
            p=0;
         }
        sum+=p;
        
    }
     if(f==1)
    {
        printf("you faild");
    }
    else{
        average=sum/6;
        printf("grade points=%.2f",average);
    }
}