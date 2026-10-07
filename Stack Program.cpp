#include <stdio.h>
#define max 10

struct stack {
    int a[max];
    int sp;
};

struct stack s;

int main() {
    s.sp = -1;
    while (1) {
        int x, n;
        printf("1. push \n2. pop\n3. display\n4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        
        switch (n) {
            case 1: 
                if (s.sp == max - 1) {
                    printf("Overflow\n");
                } else {
                    printf("Enter the item: ");
                    scanf("%d", &x);
                    s.sp = s.sp + 1;
                    s.a[s.sp] = x;
                }
                break;
            
            case 2: 
                if (s.sp == -1) {
                    printf("Underflow\n");
                } else {
                    printf("Popped item: %d\n", s.a[s.sp]); 
                    s.sp = s.sp - 1;
                }
                break;
                
            case 3: 
                if (s.sp == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack data is: ");
                    for (int i = s.sp; i >= 0; i--) {
                        printf("%d\t", s.a[i]); 
                    }
                    printf("\n");
                }
                break;
                
            case 4: 
                printf("Exiting\n");
                return 0; 
            
            default: 
                printf("Invalid choice\n");
        }
    }
    return 0;
}
