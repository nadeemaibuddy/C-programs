#include<stdio.h>
void main()
{
    struct info
    {
        int *pin;
        float *att;
    }s1;
    int id=8;
    float present=90;
    s1.pin=&id;
    s1.att=&present;
    printf("pin=%d\n",*s1.pin);
    printf("present=%.2f",*s1.att);
}