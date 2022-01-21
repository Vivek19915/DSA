#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
}*head=NULL,*tail=NULL;

void create_CLL(){
    int choice =1;
    while (choice)
    {
        struct node *newnode = new struct node;
        cout<<"enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        //to create cll
        tail->next=head;
        cout<<"press 0 to stop"<<endl;
        cin>>choice; 
    }   
}

void display_CLL(){
    struct node*temp=head;
    while (temp->next!=head)
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
    newnode->next = head;
    head= newnode;
    tail->next=newnode;
}

void insert_at_end(){
    struct node * newnode = new struct node;
    cout<<"enter data"<<endl;
    cin>>newnode->data;
    newnode->next = head;
    tail->next=newnode;
    tail= newnode;
}


void insert_at_position(int position){
    struct node * newnode = new struct node;
    struct node *temp = head;
    for (int i = 1; i < position-1; i++)
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
    cout<<"after"<<endl;
    display_CLL();


}
