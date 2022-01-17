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
void PreorderTransversal(struct node *node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    PreorderTransversal(node->left);
    PreorderTransversal(node->right);
}
int main()
{
    struct node *root = newNode(11);
    root->left = newNode(21);
    root->right = newNode(13);
    root->left->left = newNode(12);
    root->left->right = newNode(9);
    printf("\nPreorder traversal of binary tree is \n");
    PreorderTransversal(root);
    return 0;
}