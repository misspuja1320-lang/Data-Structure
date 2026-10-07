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
void beg_delete();
void last_delete();
void display();
void search();

int main()
{
    int choice=0;
    while(choice!=7)
    {
        printf("1. Beginning insert \n 2. Last insert\n 3.Beginning delete\n 4. Last delete \n  5.Search\n 6.Display\n");
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
                beg_delete();
                break;
            case 4:
                last_delete();
                break;
            case 5:
                search();
                break;
            case 6:
                display();
                break;
            case 7:
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
     struct node*p,*temp;
     int item;
     p=(struct node*)malloc(sizeof(struct node));
     if(p==NULL)
     printf("overflow");
     else
     {
         printf("Enter the item:");
         scanf("%d",&item);
         p->data=item;
         if(head==NULL)
         {
            head=p;
            p->next=head;
            }
            else
            {
                temp=head;
                while(temp->next!=head)
                {
                   temp=temp->next;
                   }
                   p->next=head;
                   temp->next=p;
                   head=p;
                   }
                   printf("Node inserted");
                   }
                   }
                   
       void last_insert()
         {
              struct node*p,*temp;
              int item;
              p=(struct node*)malloc(sizeof(struct node));
              if(p==NULL)
              printf("overflow");
              else
               {
                  printf("Enter the item:");
                  scanf("%d",&item);
                  p->data=item;
                  if(head==NULL)
                  {
                    head=p;
                    p->next=head;
                    }
                    else
                    {
                        temp=head;
                        while(temp->next!=head)
                        {
                        temp=temp->next;
                        }
                        temp->next=p;
                        p->next=head;
                        }
                        printf("item inserted");
                        }
                        }
                        
     void beg_delete()
     {
          struct node*p;
          if(head==NULL)
          printf("underflow");
          else
          {
              p=head;
              while(p->next!=head)
                p=p->next;
              p->next=head->next;
              free(head);
              head=p->next;
              printf("item delete");
              }
              }
              
   void last_delete()
   {
        struct node*p,*q;
          if(head==NULL)
          printf("underflow");
          else
          {
              p=head;
              while(p->next!=head)
              {
              q=p;
              p=p->next;
              }
              q->next=p->next;
              free(p);
              printf("item delete");
              }
              }
              
   void search()
   {
        struct node*p;
        int i=0,item,flag;
        p=head;
        if(p==NULL)
        printf("empty list");
        else
        {
            printf("Enter searching item:");
            scanf("%d",&item);
            while(p!=NULL)
            {
            if(head->data=item)
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
            
   void display()
   {
        struct node*p;
        p=head;
        if(head==NULL)
        printf("nothing to print");
        else
        {
            printf("printing values:");
            while(p->next!=head)
            {
             printf("%d\n",p->data);
             p=p->next;
             }
             printf("%d",p->data);
             }
             }
