#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head;
void beg_insert();
void last_insert();
void random_insert();
void beg_delete();
void last_delete();
void random_delete();
void display();
void search();

int main()
{
    int choice=0;
    while(choice!=9)
    {
        printf("1. Beginning insert \n 2. Last insert\n 3.Random insert\n 4.Beginning delete\n 5. Last delete \n 6.Random delete\n 7.Display\n8.Search\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                beg_insert();
                break;
            case 2:
                last_insert();
                break;
            case 3:
                random_insert();
                break;
            case 4:
                beg_delete();
                break;
            case 5:
                last_delete();
                break;
            case 6:
                random_delete();
                break;
            case 7:
                display();
                break;
            case 8:
                search();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Invalid choice...");
        }
    }
    return 0;
}
void beg_insert()
{
    struct node*p;
    int item;
    p=(struct node*)malloc(sizeof(struct node));
    
    if(p==NULL)
    printf("Overflow");
    else
    {
        printf("Enter the item:");
        scanf("%d",&item);
        if(head==NULL)
        {
          p->prev=NULL;
          p->next=NULL;
          p->data=item;
          head=p;
          }
          printf("item inserted");
          }
          }
          
void last_insert()
{
     struct node*p,*temp;
    int item;
    p=(struct node*)malloc(sizeof(struct node));
    
    if(p==NULL)
    printf("Overflow");
    else
    {
        printf("Enter the item:");
        scanf("%d",&item);
        p->data=item;
        if(head==NULL)
        {
          p->next=NULL;
          p->prev=NULL;
          head=p;
          }
          else
          {
              temp=head;
              while(temp->next!=NULL)
              {
                temp=temp->next;
                }
                temp->next=p;
                p->prev=temp;
                p->next=NULL;
                }
                }
                printf("item inserted");
                }
                
void random_insert()
{
      struct node*p,*temp;
    int item,loc,i;
    p=(struct node*)malloc(sizeof(struct node));
    
    if(p==NULL)
    printf("Overflow");
    else
    {
        printf("Enter the item:");
        scanf("%d",&item);
        p->data=item;
        printf("Enter the location:");
        scanf("%d",&loc);
        temp=head;
        for(i=1;i<loc;i++);
        {
         temp=temp->next;
         if(temp==NULL)
         {
          printf("There are less than %d elements",loc);
          return;
          }
          }
          p->next=temp->next;
          p->prev=temp;
          temp->next=p;
          temp->next->prev=p;
          printf("item inserted");
          }
          }
          
void beg_delete()
{
     struct node*p;
     if(head==NULL)
     printf("underflow");
     else if(head->next==NULL)
     {
          head=NULL;
          free(head);
          printf("item deleted");
          }
          else
          {
              p=head;
              head=head->next;
              head->prev=NULL;
              free(p);
              printf("item deleted");
              }
              }
              
void last_delete()
{
      struct node*p;
     if(head==NULL)
     printf("underflow");
     else if(head->next==NULL)
     {
          head=NULL;
          free(head);
          printf("item deleted");
          }
          else
          {
              p=head;
              while(p->next!=NULL)
              {
              p=p->next;
              }
              p->prev->next=NULL;
              free(p);
              printf("item deleted");
              }
              }
              
void random_delete()
{
     struct node*p,*temp;
     int loc;
     printf("Enter the location:");
     scanf("%d",&loc);
     p=head;
     while(p->data!=loc)
     p=p->next;
     if(p->next==NULL)
     printf("can't delete");
     else if(p->next->next==NULL)
     p->next=NULL;
     else
     {
         temp=p->next;
         p->next=temp->next;
         temp->next->prev=p;
         free(temp);
         printf("item delete");
         }
         }
         
void display()
{
     struct node*p;
     p=head;
     if(p==NULL)
     printf("nothing to print");
     else
     {
         printf("printing values:");
         while(p!=NULL)
         {
         printf("%d",p->data);
         p=p->next;
         }
         }
         }
         
void search()
{
     struct node*p;
     int item,i=0,flag;
     p=head;
     if(p==NULL)
     printf("empty list");
     else
     {
         printf("Enter the item:");
         scanf("%d",&item);
         while(p!=NULL)
         {
         if(p->data==item)
         {
            printf("item found at location %d",i+1);
            flag=0;
            break;
            }
            else
            {
                flag=1;
                }
                i++;
                p=p->next;
                }
                if(flag==1)
                printf("item not found");
                }
                }
                
                
     
              
          
     
