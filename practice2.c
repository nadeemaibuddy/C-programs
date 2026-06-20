#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void any(int data,int po)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(po==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    temp=head;
    for(int i=1;i<po-1&&temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid position");
        free(newnode);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void end(int data)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void delf()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("emp");
        return;
    }
    if(head->next=NULL)
    {
        free(head);
        head=NULL;
        return;
    }
    temp=head;
    head=head->next;
    free(temp);
}
void delany(int po)
{
    struct node *temp,*pre;
     if(head==NULL)
    {
        printf("emp");
        return;
    }
    if(po==1)
    {
        temp=head;
        head=head->next;
        free(temp);
        return;
    }
    temp=head;
    pre=NULL;
    for(int i=1;i<po&&temp!=NULL;i++)
    {
        pre=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid position");
        return;
    }
    pre->next=temp->next;
    free(temp);
}
void dele()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("emp");
        return;
    }
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
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