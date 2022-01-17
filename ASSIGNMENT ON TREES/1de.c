#include <stdio.h> 
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void PostorderTransversal(struct node *node)
{
    if (node == NULL)
        return;
    PostorderTransversal(node->left);
    PostorderTransversal(node->right);
    printf("%d ", node->data);
}
void InorderTransversal(struct node *node)
{
    if (node == NULL)
        return;
    InorderTransversal(node->left);
    printf("%d ", node->data);
    InorderTransversal(node->right);
}

int main()
{
    struct node *root = newNode(12);
    root->left = newNode(21);
    root->right = newNode(13);
    root->left->left = newNode(9);
    root->left->right = newNode(51);
    printf("\nInorder traversal of binary tree is \n");
    InorderTransversal(root);
    printf("\nPostorder traversal of binary tree is \n");
    PostorderTransversal(root);
    return 0;
}