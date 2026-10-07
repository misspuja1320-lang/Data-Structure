#include<stdio.h>
#define max 5
int Q[max]
int front=-1,rear=-1;
int main()
{
    int choice,item;
    printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
                   case 1:
                        if(rear==max-1)
                        {
                         printf("overflow");
                         }
                         else{
                              printf("Enter the element:\n");
                              scanf("%d",&item);
                              if(front==-1)
                              {
                               front=0;
                               rear=0;
                               }
                               else{
                                    rear++;
                                    }
                                    Q[rear]=item;
                                    printf("Item Inserted:\n");
                                    }
                                    break;
                     case 2:
                          if(front==-1)
                          {
                           printf("underflow");
                           }
                           else{
                                item=Q[front];
                                if(front==rear){
                                                front=-1;
                                                rear=-1;
                                                }
                                                else{
                                                     front++;
                                                     }
                                                     printf("Item Deleted:\n");
                                                     }
                                                     break;
                     case 3:
                          if(front==-1)
                          {
                           printf("Display:\n");
                           }
                           else{
                                printf("Queue elements:\n");
                                for(int i=front;i<=rear;i++)
                                {
                                printf("%d",Q[i]);
                                }
                                printf("\n");
                                }
                                break;
                     case 4:
                          printf("Exit\n");
                          return 0;
                     default:
                             printf("Invalid choice\n");
                             }
                             }
                             }
                                         
