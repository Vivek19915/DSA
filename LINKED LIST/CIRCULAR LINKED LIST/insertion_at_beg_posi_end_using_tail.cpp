#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
}*tail=NULL;

void create_CLL(){
    int choice =1;
    while (choice)
    {
        struct node *newnode = new struct node;
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (tail==NULL)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;

        }
        //to create cll
        cout<<"press 0 to stop"<<endl;
        cin>>choice; 
    }   
}

void display_CLL(){
    struct node*temp=tail->next;
    while (temp!=tail)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    //to print last element 
    cout<<temp->data<<" ";
}

void insert_at_beg(){
    struct node * newnode = new struct node;
    cout<<"enter data"<<endl;
    cin>>newnode->data;
    newnode->next = tail->next;
    tail->next=newnode;
}

void insert_at_end(){
    struct node * newnode = new struct node;
    cout<<"enter data"<<endl;
    cin>>newnode->data;
    newnode->next = tail->next;
    tail->next=newnode;
    tail= newnode;
}


void insert_at_position(int position){
    struct node * newnode = new struct node;
    struct node *temp = tail;
    for (int i = 1; i < position; i++)
    {
        temp=temp->next;
    }
    cout<<"enter data"<<endl;
    cin>>newnode->data;
    newnode->next=temp->next;
    temp->next=newnode;
}




int main(){
    create_CLL();
    cout<<"before"<<endl;
    display_CLL();
    // insert_at_beg();
    // insert_at_beg();
    // insert_at_end();
    // insert_at_end();
    insert_at_position(3);
    insert_at_position(4);
    cout<<"after"<<endl;
    display_CLL();


}
