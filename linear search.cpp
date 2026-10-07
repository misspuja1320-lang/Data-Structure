// Linear search
#include <stdio.h>

int main()
{
    int a[20],n,i,loc=-1,item;
    printf("Enter the number of element:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            loc=i;
            break;
        }
    }
    if(loc>0)
    printf("item is found");
    else
    printf("item is not found");

    return 0;
}
