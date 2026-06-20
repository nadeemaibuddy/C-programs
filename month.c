#include<stdio.h>

void main()
{
int a, b,c;
printf("This program is to print month");
printf("\nEnter today's date in this form 18/2/2025\n");
scanf("%d%d%d",&a,&b,&c);
switch (b)
{
case 1:
printf("%d/Jan/%d",a,c);
break;
case 2:
printf("%d/Feb/%d",a,c);
break;
case 3:
printf("%d/Mar/%d",a,c);
break;
case 4:
printf("%d/Apr/%d",a,c);
break;
case 5:
printf("%d/May/%d",a,c);
break;
case 6:
printf("%d/June/%d",a,c);
break;
case 7:
printf("%d/July/%d",a,c);
break;
case 8:
printf("%d/Aug/%d",a,c);
break;
case 9:
printf("%d/Sep/%d",a,c);
break;
case 10:
printf("%d/Oct/%d",a,c);
break;
case 11:
printf("%d/Nov/%d",a,c);
break;
case 12:
printf("%d/Dec/%d",a,c);
break;
default:
printf("ENTER BETWEEN 1 TO 12");
}
}