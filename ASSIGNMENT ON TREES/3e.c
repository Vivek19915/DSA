#include <stdio.h> 
#include<stdlib.h> 
#include<stdbool.h>
struct Node
{
    int key;

    struct Node *left, *right;
};
struct Node *newNode(char k)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = k;
    node->right = node->left = NULL;
    return node;
}
int countNodes(struct Node *root)
{
    if (root == NULL)
        return (0);
    return (1 + countNodes(root->left) + countNodes(root -> right));
}
bool isComplete(struct Node *root, unsigned int index,unsigned int number_nodes)
{
    if (root == NULL)
        return true;
    if (index >= number_nodes)
        return false;
    return (isComplete(root->left, 2 * index + 1, number_nodes) &&
            isComplete(root->right, 2 * index + 2, number_nodes));
}
int main()
{
    struct Node *root = NULL;
    root = newNode(6);
    root->left = newNode(12);
    root->right = newNode(18);
    root->left->left = newNode(24);

    root->left->right = newNode(30);
    root->right->right = newNode(36);
    unsigned int node_count = countNodes(root);
    unsigned int index = 0;
    if (isComplete(root, index, node_count))
        printf("The Binary Tree is a strict binary tree\n");
    else
        printf("The Binary Tree is not a strict binary tree\n");
    return (0);
}