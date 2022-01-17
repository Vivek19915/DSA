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
void postorderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->key);
}
struct Node *construct(int inorder[], int start, int end,
                       int postorder[], int *pIndex)
{
    if (start > end)
    {
        return NULL;
    }
    struct Node *node = newNode(postorder[(*pIndex)--]);
    int i;
    for (i = start; i <= end; i++)
    {
        if (inorder[i] == node->key)
        {
            break;
        }
    }
    node->right = construct(inorder, i + 1, end, postorder, pIndex);

    node->left = construct(inorder, start, i - 1, postorder, pIndex);
    return node;
}
struct Node *constructTree(int inorder[], int postorder[], int n)
{
    int *pIndex = &n;
    return construct(inorder, 0, n, postorder, pIndex);
}
int main(void)
{
    int inorder[] = {40, 20, 10, 70, 50, 80, 30, 60};
    int postorder[] = {40, 20, 70, 80, 50, 60, 30, 10};
    int n = sizeof(inorder) / sizeof(inorder[0]);
    struct Node *root = constructTree(inorder, postorder, n - 1);

    printf("Inorder traversal is ");
    inorderTraversal(root);
    printf("\nPostorder traversal is ");
    postorderTraversal(root);
    return 0;
}