// Selection Sort
#include <stdio.h>
int main() {
    int arr[100], n, i, j, k, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        k = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        temp = arr[k];
        arr[k] = arr[i];
        arr[i] = temp;
        
    }
    printf("\nSorted array (ascending order): ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
