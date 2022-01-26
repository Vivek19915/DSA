//here in sll their is nothing like size 
//since we are using DMA
//and top pointer always point to last node 
//aur see notes for detail
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
};
struct node *top=NULL;

void push(){
    struct node * newnode = new struct node;
    cout<<"Enter the pushed data"<<endl;
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
}

void pop(){
    struct node*temp=top; //temp to free the memory
    if (top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"poped out element = "<<top->data<<endl;
        top= top->next;//now top move to below node
        //now after poping we need to free that space 
        free(temp);  
    }
}

void peek_top(){
    if (top==NULL)
    {
        cout<<"Stack is empty nothing to peek out"<<endl;
    }
    else
    {
        cout<<"peek element = "<<top->data<<endl;;
    } 
}

void display(){
    struct node *temp=top;
    if (temp==NULL)
    {
        cout<<"nothing present to display"<<endl;
    }
    else
    {
        while (temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }   
    }  
}

int main(){
    int choice=1;
    while (choice)
    {
        int x;
        cout<<"press1 to push"<<endl;  
        cout<<"press2 to pop"<<endl; 
        cout<<"press3 to see top element"<<endl; 
        cout<<"press4 to display"<<endl; 
        cin>>x;
        if (x==1)
        {
            push();
        }
        else if (x==2)
        {
            pop();
        }
        else if (x==3)
        {
            peek_top();
        }
        else if (x==4)
        {
            display();
        }
        cout<<"to stop press 0"<<endl;
        cin>>choice;   
    }  
}