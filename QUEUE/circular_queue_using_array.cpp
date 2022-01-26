#include<iostream>
using namespace std;

#define size_of_circular_queue 5
int queue[size_of_circular_queue];
int front  = -1;
int rear  = -1;

void enqueue(){
    int data;
    cout<<"Enter the data u wnt to enqueue"<<endl;
    cin>>data;
    //if initially quqeue id empty
    if (front==-1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear]=data;
    }
    //if queue is full
    else if ((rear+1)%size_of_circular_queue==front)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        // rear++
        rear  = (rear +1 )%size_of_circular_queue;
        queue[rear]= data;
    }
}

void dequeue(){
    int temp = front;
    if (front==-1 && rear == -1)
    {
        cout<<"Nothing present to dequeue "<<endl;
    }
    //if only on element is present in queue
    else if (front == rear && front!=-1 && rear !=-1)
    {
        cout<<"Deqeued element = "<<queue[front]<<endl;
        front = rear  = -1;
    }
    //if more then one elemnt is present in queue
    else
    {   cout<<"Deqeued element = "<<queue[front]<<endl;
        // we do front ++
        front  =  (front +1)%size_of_circular_queue;
    }
}


void display(){
    int temp = front;
    if (front==-1 && rear == -1)
    {
        cout<<"Queue is empty "<<endl;
    }
    else
    {
        while (temp!=rear)
        {
            cout<<queue[temp]<<" ";
            temp=(temp+1)%size_of_circular_queue;
        }
        // to print last element like in circular linked list 
        cout<<queue[temp]<<endl;

    }
}


void peek(){
    if (front==-1 && rear == -1)
    {
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"peek element = "<<queue[front]<<endl;
    }
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