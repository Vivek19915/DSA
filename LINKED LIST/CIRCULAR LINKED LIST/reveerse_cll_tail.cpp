#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
struct node * tail=NULL;

void create_reverse_cll(){
    int choice=1;
    while (choice)
    {
        struct node*temp, * newnode = new struct node;
        cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        newnode->next = NULL;
        if (tail==NULL)
        {
            
            tail= temp=newnode;
            tail->next=newnode;
            
        }
        else
        {   tail->next= newnode;
            newnode->next= temp;
            temp=newnode;
        }
        cout<<"To stop press 0 "<<endl;
        cin>>choice;   
    }
}

void display(){
    struct node * tt = tail->next;
    while (tt!=tail)
    {
        cout<<tt->data<<" ";
        tt=tt->next;
    }
    cout<<tt->data<<endl;
    
}

int main(){
    create_reverse_cll();
    display();

}

