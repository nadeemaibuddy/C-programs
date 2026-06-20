#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void insert(int data)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    newnode->prev=temp;
    temp->next=newnode;
    tail=newnode;
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
        tail=newnode;
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
    tail=newnode;
}
int main()
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
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else{
         newnode->prev=temp;
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
    end(53);
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}
