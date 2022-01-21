#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
}*head =NULL,*tail;

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

void diaplay_cll(){
    struct node * temp=head;
    // if (head==NULL)
    // {
    //     cout<<"ll not created"<<endl;
    // }
    // else
    // {
        while (temp->next!=head)
        {
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        //toprint data of last node
        cout<<tail->data;
        //OR
        cout<<temp->data;
    }
    
    
// }

int main(){
    create_CLL();
    diaplay_cll();
}