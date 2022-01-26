#include<iostream>
using namespace std;

#define size_of_queue 5
//globally define queue and front and rear
int queue[size_of_queue];
int front =-1;
int rear =-1;

void enqueue(){
    int data;
    cout<<"Enter the data u wnt to enqueue"<<endl;
    cin>>data;
    if (rear == size_of_queue -1)
    {
        cout<<"Queue is full"<<endl;
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear]=data;
    }
    else
    {   //kyuki insertion me sirf rear hi increament jota h
        //kyuki rear end se hum insertion karte h 
        rear++;
        queue[rear]=data;
    }  
}

void dequeue(){
    if (rear==-1)
    {
        cout<<"nothing present in queue to remove"<<endl;
    }
    else if (front ==rear && front!=-1 && rear!=-1)
    {
        //mtlb queue me vo last element h 
        //aur usko remove karne ke baad queue empty ho jayega
        cout<<"last dequeued element of queue is:- "<<queue[front]<<endl;
        front =rear =-1;
        //taki phirse new queue ban jaye
    }
    else
    {
        cout<<"dequeued element = "<<queue[front];
        front++;
    }
}

void display(){
    int a= front;
    while (a<=rear)
    {
        cout<<queue[a]<<" ";
        a++; //taki loop ruk jaye
    }cout<<endl;
}

void peek(){
    cout<<"first element of queue = "<<queue[front]<<endl;
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

