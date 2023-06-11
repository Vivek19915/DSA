#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
struct node * front  = NULL;
struct node * rear =  NULL;
void enqueue(){
    cout<<"Enter the data"<<endl;
    struct node * newnode  =  new struct node ;
    cin>>newnode->data;
    newnode->next=NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear  = newnode;
    }
    else
    {
        rear->next =newnode;
        rear = newnode;
    }
}
void display(){
    struct node * temp  = front;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}
void dequeue(){
    if (front == NULL && rear == NULL)
    {
        cout<<"Nothing to deququed"<<endl;
    }
    else
    {
        struct node * temp  = front;
        front  =  front ->next;
        cout<<"dequed element "<<temp->data;
        free(temp);
    }
}
void peek(){
    cout<<"peek element = "<<front ->data<<endl;;
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