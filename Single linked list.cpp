#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
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
        p->data=item;
        p->next=head;
        head=p;
        printf("Node Inserted\n");
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
            head=p;
            printf("Node Inserted\n");
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=p;
            p->next=NULL;
            printf("Node Inserted\n");
        }
    }
}

void random_insert()
{
     struct node*p,*temp;
    int item,i,loc;
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
        for(i=1;i<loc;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("Can't Insert");
                return;
            }
        }
        p->next=temp->next;
        temp->next=p;
        printf("Node Inserted\n");
    }
}

void beg_delete()
{
  struct node*p;
  if(head==NULL)
   printf("Underflow");
   else
   {
       p=head;
       head=p->next;
       free(p);
       printf("Node deleted\n");
       }
       }
       
    void last_delete()
    {
         struct node*p,*q;
         if(head==NULL)
         printf("Underflow");
         else if(head->next==NULL)
         {
              head=NULL;
              free(head);
              printf("only node of list deleted");
              }
              else
              {
                  p=head;
                  while(p->next!=NULL)
                  {
                     q=p;
                     p=p->next;
                     }
                     q->next=NULL;
                     free(p);
                     printf("Node deleted\n");
                     }
                     }
         void random_delete()
         {
              struct node*p,*q;
              int i,loc;
              printf("Enter the location:");
              scanf("%d",&loc);
              p=head;
              for(i=0;i<loc;i++)
              {
                 q=p;
                 p=p->next;
                 if(p==NULL)
                 {
                    printf("can't delete");
                    return;
                    }
                    }
                    q->next=p->next;
                    free(p);
                    printf("Node deleted\n");
                    }
                    
         void search()
         {
              struct node*p;
              int i=0,item,flag;
              p=head;
              if(p==NULL)
              printf("Underflow");
              else
              {
                  printf("Enter item:");
                  scanf("%d",&item);
                  while(p!=NULL)
                  {
                     if(p->data==item)
                     {
                        printf("item found at location %d",i+1);
                        flag=0;
                        }
                        else
                        {
                            flag=1;
                            }
                            i++;
                            p=p->next;
                            }
                            if(flag==1)
                            {
                              printf("Item not found \n");
                              }
                              }
                              }
                              
         void display()
         {
              struct node*p;
              p=head;
              if(p==NULL)
              printf("Nothing to print");
              else
              {
                  printf("printing values:");
                  while(p!=NULL)
                  {
                     printf("%d\t\n",p->data);
                     p=p->next;
                     }
                     }
                     }
                     
