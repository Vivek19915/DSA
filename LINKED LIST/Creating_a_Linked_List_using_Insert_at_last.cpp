#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
 //GLOBAL VARIABLE
struct node* head=NULL;

void insert(int data){
    struct node *newnode,*temp,*lastnode;
    newnode  =  new struct node;
    newnode->data=data;
    newnode->next=NULL;

    if (head==NULL)
    {
        head= temp =newnode;
    }
    else
    {
        temp->next = newnode;
        temp=newnode;
    }
}

void display(struct node *head){
    while (head)
    {
        cout<<head->data<<endl;
        head= head->next;
    }
    
}
int main(){
    insert(8);
    insert(7);
    insert(5);
    insert(4);
    insert(123);

display(head);
}
