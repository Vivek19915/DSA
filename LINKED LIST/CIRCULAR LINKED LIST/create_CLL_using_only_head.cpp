#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node*head= NULL;

void create_CLL(){
    int choice=1;
    struct node*newnode,*temp;
    while (choice)
    {
        newnode = new struct node;
        cout<<"Enter data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp=newnode;
        }
        //🔥🔥🔥to create cll you last newnode->next should point to first node//
        //and adress of first node is present in head 
        temp->next=head;
        cout<<"Wnat to stop press 0"<<endl;
        cin>>choice;
    }
    //to check our cll is created or not
//     if (temp->next->data==head->data)
//     {
//         cout<<"created"<<endl;
//     } 
}

void display_cll(){
    struct node *temp;
    if (head==NULL)
    {
        cout<<"cll not created"<<endl;
    }
    else
    {
        temp=head;
        while (temp->next!=head)  //VVV imp conition to stop cll
        {
            cout<<temp->data;
            temp=temp->next;
        }
        //printing data of last node
        cout<<temp->data;
        
    }
    
    
}


int main(){
    create_CLL();
    display_cll();
    

}