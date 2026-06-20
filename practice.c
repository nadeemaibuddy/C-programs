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
    newnode->next=temp->next;
    temp->next=newnode;
    temp=newnode;
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
    temp=newnode;
}
void delf()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("empty");
        return;
    }
    temp=head;
    head=head->next;
    free(temp);
}
void delany(int po)
{
    struct node *temp,*prev;
    if(head==NULL)
    {
        printf("empty");
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
    prev=NULL;
    for(int i=1;i<po&&temp!=NULL;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}
void dele()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("empty");
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
void main()
{
    struct node *newnode,*temp;
    int data,ch;
    printf("enter 1 to create and 0 to stop");
    scanf("%d",&ch);
    while(ch==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("entre data");
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
        printf("enter 1 to create and 0 to stop");
        scanf("%d",&ch);
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    insert(46);
    any(117,2);
    end(53);
    delf();
    delany(2);
    dele();
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}