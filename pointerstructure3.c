#include<stdio.h>
void main()
{
    struct noddy
    {   struct noddy *an;
        int data;
        struct noddy *na;
    }s1,s2,s3;
    int a=10,b=20,c=30;
    s1.data=a;
    s1.an=NULL;
    s1.na=NULL;
    s2.data=b;
    s2.an=NULL;
    s2.na=NULL;
    s3.data=c;
    s3.an=NULL;
    s3.na=NULL;
    s1.na=&s2;
    s2.na=&s3;
    s2.an=&s1;
    s3.an=&s2;
    printf("value.1=%d\n",s1.data);
    printf("value.2=%d\n",s1.na->data);
    printf("value.3=%d\n",s1.na->na->data);
    printf("value.1=%d\n",s2.an->data);
    printf("value.2=%d\n",s2.data);
    printf("value.3=%d\n",s2.na->data);
    printf("value.1=%d\n",s3.an->an->data);
    printf("value.2=%d\n",s3.an->data);
    printf("value.3=%d\n",s3.data);
      
}