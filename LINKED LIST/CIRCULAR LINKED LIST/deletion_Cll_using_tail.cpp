#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node * next;
};
struct node * tail= NULL;

void create_cll(){
    int choice =1;
    while (choice)
    {
        struct node * newnode =  new struct node ;
        cout<<"ENter the data"<<endl;
        cin>> newnode->data;
        newnode->next=NULL;
        if (tail==NULL)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }   
        cout<<"to stop press 0"<<endl;
        cin>>choice;
    }
}

void display(){
    struct node * temp = tail->next;
    while (tail!=temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

void del_at_beg(){
    struct node * temp = tail->next;
    //tail->next = head
    //logic
    tail->next = temp->next;
    free(temp);
}

void del_at_end(){
    struct node * temp =tail;
}