#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * previous;
};
struct node * head  =  NULL;
struct node * tail  =  NULL;

void create_DLL(){
    int choice =1 ;
    while (choice)
    {
        struct node * newnode  =  new struct node ;
        cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->previous=NULL;
        if (head==NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->previous=tail;
            tail=newnode;
        }
        cout<<"to stop press 0 "<<endl;
        cin>>choice;
    }
}

void display(){
    struct node * temp =  head;
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;   
}

void insert_AT_beg(){
    struct node * newnode   =  new struct node;
    cout<<"Enter data to insert at beg"<<endl;
    cin>>newnode->data;
    newnode->previous=NULL;
    head ->previous=  newnode;
    newnode ->next= head ;
    head =  newnode;
}

void insert_at_end(){
    struct node * newnode   =  new struct node;
    cout<<"Enter data to insert at end"<<endl;
    cin>>newnode->data;
    tail->next=newnode;
    newnode->next=NULL;
    newnode->previous=tail;
    tail=newnode;
}

void insert_at_position(){
    int position;
    cout<<"Enter the position at which u want tot insert data"<<endl;
    cin>>position;
    struct node * newnode  =  new struct node;
    cout<<"Enter the data at "<<position<<"position"<<endl;
    cin>>newnode->data;
    struct node * temp  = head;
    //now we have to traverse to that position
    for (int i = 1; i < position-1; i++)
    {
        temp =temp->next;
    }
    //logic
    newnode->next= temp->next;
    newnode->previous=temp;
    temp->next->previous=newnode;//🔥🔥🔥 this is very imp to stablish the reverse link🔥🔥🔥
    temp->next= newnode;
    temp=newnode;
}

void reverse_display(){
    struct node * temp  =  head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp= temp->previous;
    }
}


int main(){
    create_DLL();
    display();
    insert_AT_beg();
    insert_AT_beg();
    display();
    insert_at_end();
    insert_at_end();
    display();
    insert_at_position();
    insert_at_position();
    display();
    reverse_display();
}
