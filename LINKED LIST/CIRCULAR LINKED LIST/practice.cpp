#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
struct node * head= NULL;
struct node * tail= NULL;

void create_CLL(){
    int choice  =1;
    while (choice)
    {
        struct node *newnode = new struct node;
        cout<<"Enter data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (head==NULL)
        {
            head= tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        //to close/make cll
        tail->next=head;

        cout<<"to stop press 0"<<endl;
        cin>>choice;
    } 
}


void display(){
    struct node * temp =head;
    while (temp!=tail)
    {
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<tail->data<<endl;
}

void insert_at_beg(){
    struct node * newnode = new struct node;
    cout<<"ENter data at beg"<<endl;
    cin>>newnode->data;
    //logic start
    newnode->next= head;
    head = newnode;
    tail->next= newnode;
}

void insert_at_end(){
    struct node * newnode = new struct node;
    cout<<"ENter data at end"<<endl;
    cin>>newnode->data;
    //logic start
    newnode->next = head;
    tail->next=newnode;
    tail= newnode;
}

void insert_at_position(){
    int position;
    cout<<"Enter the position"<<endl;
    cin>>position;
    struct node *temp,* newnode = new struct node;
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
    int choice  =1;
    while (choice)
    {
        

        cout<<"to stop press 0"<<endl;
        cin>>choice;
    } 


}