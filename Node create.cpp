#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node* add;
};

int main() {
    struct node *p, *start, *q, *r, *temp;

    // Create first node
    p = (struct node*)malloc(sizeof(struct node));
    p->data = 'A';
    p->add = NULL;
    start = p;

    // Create second node
    q = (struct node*)malloc(sizeof(struct node)); // Allocate memory for q
    q->data = 'B';
    q->add = NULL;
    p->add = q; // Link first node to second node

    // Create third node
    r = (struct node*)malloc(sizeof(struct node));
    r->data = 'C';
    r->add = NULL;
    q->add = r; // Link second node to third node

    // Print the linked list
    temp = start;
    while (temp != NULL) {
        printf("%c\n", temp->data);
        temp = temp->add; // Move to the next node
    }

    // Free allocated memory
    temp = start;
    struct node* nextNode;
    while (temp != NULL) {
        nextNode = temp->add; // Store the next node
        free(temp); // Free current node
        temp = nextNode; // Move to the next node
    }

    return 0;
}
