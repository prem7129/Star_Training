#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* tail=NULL;
void create(int value)
{
   struct node* newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=value;
   newnode->next=NULL;
   if(head==NULL)
   {
    head=tail=newnode;
   }
   else
   {
     tail->next=newnode;
     tail=newnode;
   }
   
}
void print(struct node* head)
    {
        struct node* temp=head;
        while(temp->next!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->next;
        }
        printf(" %d",temp->data);
    }
struct node* reverse(struct node* head)
{
    struct node* temp=NULL;
    struct node* prev=NULL;
    struct node* current=head;
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    return prev;
 
}
int palindrome( struct node* head)
{
    struct node* one=head;
    struct node* two=head;
    if(head==NULL || head->next==NULL)
    {
        return 0;
    }
    while(two!=NULL && two->next!=NULL)
    {
        one=one->next;
        two=two->next->next;
    }
    struct node* secondhalf=reverse(one);
    struct node* firsthalf=head;
    while(secondhalf!=NULL)
    {
        if(firsthalf->data!=secondhalf->data)
        {
              return 0;
        }
        firsthalf=firsthalf->next;
        secondhalf=secondhalf->next;
    }
    return 1;
}
int main()
{
    int n;
    printf("enter the number of list to be created:\n");
    scanf(" %d",&n);
    for(int  i=0;i<n;i++)
    {
        int value;
        printf("enter the value of list %d\n",i+1);
        scanf(" %d",&value);
        create(value);
    }
    print(head);
   //head= reverse(head);
  // printf("\nreversed list\n");
    //print(head);

int result ;
result=palindrome(head);
if(result)
{
    printf("Yes it is palindrome");
}
else{
    printf("not a palindrome");
}
return 0;
}