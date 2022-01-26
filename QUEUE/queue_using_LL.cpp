#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *front  =NULL;
struct node * rear  = NULL;


void enqueue(){
    int data;
    cout<<"Enter the data u want to enqueue"<<endl;
    cin>>data;
    struct node * newnode =  new struct node;
    newnode->data=data;
    newnode->next=NULL;
    if (front==NULL && rear==NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next=newnode;
        rear = newnode;
    }   
}

void dequeue(){
    struct node * temp=front;
    if (front==NULL && rear==NULL)
    {
        cout<<"Nothing present to dequeue"<<endl;
    }
    else
    {
        cout<<"dequed element = "<<front->data<<endl;
        front = front ->next;
    }
    //now we free the memeory 
    free(temp);
}

void display(){
    struct node * temp= front ;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
}

void peek(){
    if (front==NULL && rear==NULL)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    cout<<"peak element  = "<<front->data<<endl;
    
}

int main(){
    int choice =1;
    while (choice)
    {
        cout<<"Press 1 to enqueue data"<<endl;
        cout<<"Press 2 to dequeue data"<<endl;
        cout<<"Press 3 to display data"<<endl;
        cout<<"Press 4 to peek of queue"<<endl;
        int press;
        cin>>press;
        if (press==1)
        {
            enqueue();
        }
        else if (press==2)
        {
            dequeue();
        }
        else if (press==3)
        {
            display();
        }
        else
        {
            peek();
        }

        cout<<"to stop press 0 "<<endl;
        cin>>choice;
    }
}

