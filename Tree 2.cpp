//Tree Traversal
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* Node(int item) {
    
    struct Node*p = (struct Node*)malloc(sizeof(struct Node));
    p->data = item;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    int item;
    printf("Enter root:");
    scanf("%d",&item);
    struct Node* root = Node(item);
    printf("Enter left child item:");
    scanf("%d",&item);
    root->left = Node(item);
    printf("Enter the right child item:");
    scanf("%d",&item);
    root->right = Node(item);
    printf("Enter the left to left child item:");
    scanf("%d",&item);
    root->left->left = Node(item);
    printf("Enter the left to right child item:");
    scanf("%d",&item);
    root->left->right = Node(item);
    printf("Enter the right to right child item:");
    scanf("%d",&item);
    root->right->right=Node(item);
    
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}
