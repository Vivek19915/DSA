#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head =NULL;

void insert(int data){
    struct node *temp, *newnode = new struct node;
    newnode->data=data;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    } 
}

void display(struct node * head){
    while (head)
    {
        cout<<head->data<<endl;
        head= head->next;
    }
}

void del_at_beg(struct node *&head){
    struct node *temp = head;
    head = head->next;
    // free( temp);
    delete temp;
}

void del_at_end(struct node* head){
    struct node *previous_node,*temp = head;
    while (temp->next)
    {
        
    }
    
    

}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);

    cout<<"before deletion"<<endl;
    display(head);
    del_at_beg(head);
    cout<<"after deletion"<<endl;
    display(head);
}