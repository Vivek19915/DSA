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

void delete_AT_beg(){
    struct node * temp =head;
    if (head==0)
    {
        cout<<"list is empty"<<endl;
    }
    else{
        head =  head ->next;
        head->previous=NULL;
        free(temp);
    }
}

void delete_at_end(){
    struct node * temp = tail;
    if (tail==0)
    {
        cout<<"list is empty"<<endl;
    }
    else
    {
        tail=tail->previous;
        tail->next=0;
        free(temp);
    }
}

void delete_at_position(){
    int position;
    cout<<"Enter the position at which u want to delete data"<<endl;
    cin>>position;
    //now we have to traverse to that position
    struct node * temp  = head;
    struct node *a=temp;
    for (int i = 1; i < position; i++)
    {
        temp =temp->next;
        a=temp;
    }
    //logic
    temp->next->previous=temp->previous;
    temp->previous->next=temp->next;
    free(a);
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
    delete_AT_beg();
    delete_AT_beg();
    display();
    delete_at_end();
    delete_at_end();
    display();
    delete_at_position();
    delete_at_position();
    display();
    reverse_display();
}
