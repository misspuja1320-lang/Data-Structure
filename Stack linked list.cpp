// Stack using linked list
#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*prev;
    struct node*link;
}*start,*top;
void push()
{
    int item;
    struct node*temp=malloc(sizeof(struct node));
    printf("Enter the item:");
    scanf("%d",&item);
    temp->info=item;
    temp->prev=NULL;
    temp->link=NULL;
    if(top==NULL)
    {
        start=temp;
        top=temp;
    }
    else{
        top->link=temp;
        temp->prev=top;
        top=temp;
    }
    printf("%d is insert successfully\n",item);
}
void pop()
{
    int item;
    if(top==NULL)
    {
        printf("Stack is empty \n");
    }
    else
    {
        item=top->info;
        top=top->prev;
    }
    printf("%d is delete successfully\n",item);
}
int main() {
    int n;
    printf("1.push 2.pop 3.exit\n");
    while(1){
    printf("Enter your choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: break;
        default:
        printf("Invalid");
    }
    }
    return 0;
}
