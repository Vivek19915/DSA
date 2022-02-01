#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
struct node * head=  NULL;


void display(struct node * temp){
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    
}

struct node * current  =  head ;
struct node * previous  =  NULL ;


void reverse_cll(){
    struct node * forward  =  NULL ;
    if (head ==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        while (current!=0)
        {
            forward = current->next;
            current->next=previous;
            previous=current;
            current=forward;
        }
        
    }
    
    
}

int main(){
    int choice  =  1;
    while (choice)
    {
        struct node *temp,* newnode =  new struct node;
        cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (head==NULL)
        {
            head = temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"to stop press 0"<<endl;
        cin>>choice;
    }

    display(head);
    reverse_cll();
    display(previous);
    
}
