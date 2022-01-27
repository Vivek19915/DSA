#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
struct node * tail= NULL;


void create_cll_tail(){
    int choice =1 ;
    while (choice)
    {
        struct node *newnode  =  new struct node;
        cout<<"Enter data u want to insert"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (tail==NULL)
        {
            tail=newnode;//phle tail me newndoe ka address
            //uske baad newndoe ke next me ussi node ka adress taki vo apne 
            //point kar sake aur circular ban sake 
            newnode->next=tail;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        cout<<"press 0 to stop"<<endl;
        cin>>choice; 
    }
}


void display(){
    struct node * temp =tail;
    while (temp->next!=tail)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
    
}
int main(){

    create_cll_tail();
    display();
    
}
