#include<stdio.h>
int main()
{
    int rear,front,item,n;
    printf("Enter the number of element:\n");
    scanf("%d",&n);
    if(front==-1)
    {
       printf("Queue is empty");
       }
       else{
            if(front==rear)
            {
              front=-1;
              rear=-1;
              }
              else
              {
                  front=+1;
                  }
                  q[front]=item;
                  }
                  return 0;
                  }
