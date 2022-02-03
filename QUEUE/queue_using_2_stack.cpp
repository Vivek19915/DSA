#include <iostream>
using namespace std;
#define size 5
int stack1[size];
int stack2[size];
int top1 = -1;
int top2 = -1;

void enqueue()
{
    if (top1 == size - 1)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        top1++;
        cout << "Enter the data" << endl;
        cin >> stack1[top1];
    }
}

void dequeue()
{
    if (top1 == -1 && top2 == -1)
    {
        cout << "Nothing present to dequeued" << endl;
    }
    else if (top2 == -1)
    {
        while (top1 > -1)
        {
            top2++;
            stack2[top2] = stack1[top1];
            top1--;
        }
        cout<<"dequed element = "<<stack2[top2]<<endl;
        top2--;
    }
    else
    {
        cout<<"dequed element = "<<stack2[top2]<<endl;
        top2--;
    }
}

void display(){
    
    for (int k2 = 0; k2<=top2; k2++)
    {
        cout<<stack2[k2]<<" ";
    for (int k1 = top1 ; k1>-1; k1--)
    {
        cout<<stack1[k1]<<" ";
    }
    }cout<<endl;
}

void peek(){
    if (top2==-1)
    {   //mltb abhi stack 2 pura empty h 
        cout<<"peek element "<< stack1[top1]<<endl;
    }
    else
    {   //mtlb stack2 empty nhi h 
    //toh uska bottom elemnt will we our peek element
       cout<<"peek element "<< stack2[0]<<endl;
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