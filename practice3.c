#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *head=NULL;
void insert(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    if(head==NULL)
    head->prev=newnode;
    head=newnode;
}
void end(int data)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        if(head!=NULL)
        {
        head->prev=NULL;}
        return;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
    temp=newnode;
}
void any(int data,int po)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(po==1)
    {
        head=newnode;
         if(head!=NULL)
        {
        head->prev=NULL;}
        newnode->next=head;
        return;
    }
    temp=head;
    for(int i=1;i<po;i++)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
}
void delf()
{
    struct node *temp;
    temp=head;
     if(head!=NULL)
        {
        head->prev=NULL;}
    head=head->next;
    free(temp);
}
void dele()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}
void deleany(int po)
{
    struct node *temp,*pre;
    if(po==1)
    {
        delf();
        return;
    }
    temp=head;
    pre=NULL;
    for(int i=1;i<po;i++)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=temp->next;
    free(temp);
}
void main()
{
    struct node *newnode,*temp;
    int data,ch;
    printf("enter 1 to create and 0 to stop");
    scanf("%d",&ch);
    while(ch==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("enter 1 to create and 0");
        scanf("%d",&ch);
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    insert(53);
    end(46);
    any(11,2);
   delf();
   dele();
   deleany(2);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}