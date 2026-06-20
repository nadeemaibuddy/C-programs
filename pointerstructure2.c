#include<stdio.h>
void main()
{
    struct noddy
    {
        int data;
        struct noddy *na;
    }s1,s2,s3;
    int a=10,b=20,c=30;
    s1.data=a;
    s1.na=NULL;
    s2.data=b;
    s2.na=NULL;
    s3.data=c;
    s3.na=NULL;
    s1.na=&s2;
    s2.na=&s3;
    printf("value.1=%d\n",s1.data);
    printf("value.2=%d\n",s1.na->data);
    printf("value.2=%d\n",s1.na->na->data); 
}