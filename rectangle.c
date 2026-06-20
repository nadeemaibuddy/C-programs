#include<stdio.h>
void main()
{
int l,w,p,a;
printf("This program is to find area and perimeter of rectangle");
printf("\nEnter the length and weidth of rectangle");
scanf("%d%d",&l,&w);
p=2*(l+w);
a=l*w;
printf("Area of rectangle=%d",a);
printf("\nPerimeter of rectangle=%d",p);
}