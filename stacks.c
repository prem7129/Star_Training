#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

void pop(struct node** top)
{
    struct node*temp=*top;
    int poped=temp->data;
    *top=(*top)->next;
    printf("the top of the element is %d",poped);
    free(temp);

}
struct node* push(struct node* top, int value)
{
    
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   if(!temp)
   {
    printf("memory allocation failed");
    return top;
   }
   temp->data=value;
   temp->next=top;
   return temp;
}
void print(struct node* top)
{
    struct node* temp;
    temp=top;
    if (!temp)
    {
        printf("stack is empty");
    }
    while(temp!=NULL)
    {
        printf(" %d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n;
    printf("enter the size\n");
    scanf(" %d",&n);
    struct node* stack =NULL;
    for(int i=0;i<n;i++)
    {
     int value;
     printf("enter the data %d:",i);
        scanf(" %d",&value);
        stack=push(stack,value);
    }
    print(stack);
    pop(&stack);
    return 0;
}