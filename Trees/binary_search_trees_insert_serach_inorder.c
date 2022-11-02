#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *left_child;
    int data;
    struct Node *right_child;
} *root = NULL;


void Insert(int key)
{

    struct Node *temp = root;
    struct Node *r = NULL, *newnode;
    if (root == NULL)
    {
       
            newnode = (struct Node *)malloc(sizeof(struct Node));
            newnode->data = key;
            newnode->left_child = newnode->right_child = NULL;
            root = newnode;
            return;
      
    }
    while (temp != NULL)
    {
        r = temp;
        if (key < temp->data)
            temp = temp->left_child;
        else if (key > temp->data)
            temp = temp->right_child;
        else
            return;
    }
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = key;
    newnode->left_child = NULL;
    newnode->right_child = NULL;

    if (key < r->data)
        r->left_child = newnode;
    else
        r->right_child = newnode;
}


void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->left_child);
        printf("%d ", p->data);
        Inorder(p->right_child);
    }
}


void search(int key)
{
    if (root == NULL)
    {
        printf("NO element prestnt in tree \n");
        return;
    }
    struct Node *temp = root;
    while (temp != NULL)
    {
        if (key == temp->data)
        {
            printf("key is present \n");
            // aur jese hi key milege apn function se bahara aa jayege
            return;
        }
        else if (key < temp->data)
        {
            temp = temp->left_child;
        }
        else if (key > temp->data)
        {
            temp = temp->right_child;
        }
    }
    // aur agr loop me key nhi mili
    //  mtlb key present nhi h toh
    printf("Key is not present \n");
    return;
}
int main()
{
    search(20);
    Insert(50);
    Insert(10);
    Insert(40);
    Insert(20);
    Insert(30);
    Inorder(root);
    printf("\n");
    search(20);
    return 0;
}
