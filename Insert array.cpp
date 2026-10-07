// Insert Array
#include <stdio.h>
int main() {
    int n,pos,i,a[20],item;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the element of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position of array:\n");
    scanf("%d",&pos);
    printf("Enter the item:\n");
    scanf("%d",&item);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=item;
    n=n+1;
    printf("Resultant an array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
