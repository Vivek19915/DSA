#include <stdio.h> 
#include <stdlib.h> 
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};
struct Node *newNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = node->right = NULL;
    return node;
}
void inorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->key);

    inorderTraversal(root->right);
}
void preorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->key);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
struct Node *construct(int inorder[], int start, int end,
                       int preorder[], int *pIndex)
{
    if (start > end)
    {
        return NULL;
    }

    struct Node *node = newNode(preorder[(*pIndex)++]);
    int i;
    for (i = start; i <= end; i++)
    {
        if (inorder[i] == node->key)
        {
            break;
        }
    }
    node->left = construct(inorder, start, i - 1, preorder, pIndex);
    node->right = construct(inorder, i + 1, end, preorder, pIndex);
    return node;
}
struct Node *constructTree(int inorder[], int preorder[], int n)
{
    int pIndex = 0;

    return construct(inorder, 0, n - 1, preorder, &pIndex);
}
int main()
{
    int inorder[] = {16, 8, 4, 28, 20, 32, 12, 24};
    int preorder[] = {4, 8, 16, 12, 20, 28, 32, 24};
    int n = sizeof(inorder) / sizeof(inorder[0]);
    struct Node *root = constructTree(inorder, preorder, n);
    printf("The inorder traversal is ");
    inorderTraversal(root);
    printf("\nThe preorder traversal is ");
    preorderTraversal(root);

    return 0;
}