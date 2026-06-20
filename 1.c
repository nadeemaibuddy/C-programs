#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    scanf("%d",a);
    printf("INTEGER TYPE=%d",a);
    scanf("%f",b);
    printf("\nDECMAL TYPE=%.2f",b);
    scanf("%c",c);
    printf("\nCHARACTER TYPE=%s",c);

    return 0;
}