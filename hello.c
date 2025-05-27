#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* newnode(int data)
{
struct node* newnode1=(struct node*)malloc(sizeof(struct node));
newnode1->data=data;
newnode1->next=NULL;
return newnode1;

};
void push(struct node** top, int data)
{
    struct node* new=newnode(data);
    new->next=*top;
    *top=new;
    printf("data is pushed\n");
    
}



int main()
{
   struct node* stack=NULL;
   push(&stack,10);
   push(&stack,20);
   while(stack!=NULL)
   {
    printf("%d\n",stack->data);
    stack=stack->next;
}

return 0;
}