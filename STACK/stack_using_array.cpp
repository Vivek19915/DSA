#include<iostream>
using namespace std;

//using macro
#define size_of_stack 5
int top=-1;
//defining stack globally
int stack[size_of_stack];


void push(){
    if (top==size_of_stack-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        cout<<"Enter the data u wnat to push"<<endl;
        int data;
        cin>>data;
        //since we have to increase top to push new input
        top++;
        stack[top]=data;
    }
}

void pop(){
    if (top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"poped out element= "<<stack[top];
        top--;
    } 
}

void peek_top(){
    cout<<"top element in stack is = "<<stack[top]<<endl;
}

void display(){
    //since our top always point to top element
    for (int i = top; i >=0; i--)
    {
        cout<<stack[i]<<endl;
    }
}

void isfull(){
    if (top==size_of_stack-1)
    {
        cout<<"stack is full"<<endl;
    } 
    else
    {
        cout<<"stack have free space of "<<size_of_stack-top-1<<"element"<<endl;
    }
      
}
void isempty(){
    if (top==-1)
    {
        cout<<"stack is empty"<<endl;
    } 
    else
    {
        cout<<"stack have free space of "<<size_of_stack-top-1<<"element"<<endl;
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
        cout<<"press5 to check stack is empty or not"<<endl; 
        cout<<"press6 to check stack is full or not"<<endl;

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
        else if (x==5)
        {
            isempty();
        }
        else
        {
            isfull();
        }
        
        cout<<"to stop press 0"<<endl;
        cin>>choice;
        
    }
     
}