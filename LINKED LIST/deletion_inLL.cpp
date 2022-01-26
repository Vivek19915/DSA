#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head =NULL;
struct node *temp =NULL;

void insert(){
    struct node * newnode = new struct node;
    cout<<"Enter the data u wnat to insert"<<endl;
    cin>>newnode->data;
    newnode->next=NULL;
    if (head==NULL && temp==NULL)
    {
        head = temp =newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}

void display(){
    struct node *dis=head;
    while (dis)
    {
        cout<<dis->data<<" ";
        dis=dis->next;
    }
}

void del_at_beg(){
    struct node* t=head;
    t=head;
    head= head->next;
    //to free deleted memeory
    free(t);
}


void del_at_end(){
    struct node*del, *te=head;
    while (te->next->next!=0)
    {
        te=te->next;
    }
    te->next=NULL;
    del=te->next;
    free(del);
}

void del_at_position(){
    int position;
    struct node*prev,*curr=head;
    prev=NULL;
    cout<<"Enter the position u wnt to delete"<<endl;
    cin>>position;
    for (int i = 1; i < position; i++)
    {
       prev = curr;
       curr=curr->next;
    }
    prev->next=curr->next;
    //free memeory
    free(curr);
}

int main(){
    int choice =1;
    while (choice)
    {   int x;
        cout<<"press 1 to insert data"<<endl;
        cout<<"press 2 to display data"<<endl;
        cout<<"press 3 to delete_at_beg data"<<endl;
        cout<<"press 4 to delete_at_end"<<endl;
        cout<<"press 5 to delete_at_position"<<endl;
        cin>>x;
        if (x==1)
        {
            insert();
        }
        if (x==2)
        {
            display();
        }
        if (x==3)
        {
            del_at_beg();
        }
        if (x==4)
        {
            del_at_end();
        }
        if (x==5)
        {
            del_at_position();
        }

        cout<<"want to stop press 0 else press 1"<<endl;
        cin>>choice;   
    }   
}