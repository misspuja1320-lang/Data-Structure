// Binary Search
#include<stdio.h>
int main()
{
    int n,i,item,s=0,e,mid,v=0,a[20];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter vthe welement of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the searching item:");
    scanf("%d",&item);
    e=n-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]<item)
        {
            s=mid+1;
        }
        else if(a[mid]==item)
        {
            v=1;
            break;
        }
        else
        {
            e=mid-1;   
        }
    }
    if(v==1)
    printf("item found");
    else
    printf("item not found");
    return 0;
}                          
