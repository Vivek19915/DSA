#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * previous;
    struct node * next;
};
struct node * head =  NULL;

void create_DLL(){
    int choice = 1;
    while (choice )
    {
        struct node * newnode = new struct node;
        struct node * temp;
        cout<<"Enter tha data"<<endl;
        cin>>newnode->data;
        newnode->previous=NULL;
        newnode->next=NULL;
        if (head==NULL)
        {
            head =  temp =newnode;
        }
        else
        {
            newnode->previous=temp;
            temp->next=newnode;
            temp=newnode;
        }

        cout<<"To stop press 0 "<<endl;
        cin>>choice;
    }
}

void display(){
    struct node * temp  =  head;
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
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
    reverse_display();
}
