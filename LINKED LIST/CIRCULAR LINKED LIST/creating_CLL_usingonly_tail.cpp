#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
}*tail=NULL,*newnode ;

void createCLL(){
    int choice =1;
    while (choice)
    {
         newnode = new struct node;
        cout<<"enter data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (tail==NULL)
        {
            tail= newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next=newnode;
            tail=newnode;
        }     
        cout<<"press 0 to stop"<<endl;
        cin>>choice;   
    }
    
}

void displaycll(){
    struct node*temp= tail;
    if (temp==NULL)
    {
        cout<<"CLL not formed";
    }
    else
    {
        while (temp->next!=tail)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        //to print last node
        cout<<temp->data;
        
    }
    
    
    
    
}


int main(){
    createCLL();
    displaycll();

}