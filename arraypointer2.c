#include <stdio.h>
void main()
{   int i;
    char a[]={"nadeem"};
    char *b;
    b=&a[0];
    for(i=0;i<6;i++)
    {
        printf("a[%d] is =%c\n",i,*(b+i));
    }
}