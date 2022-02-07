#include<iostream>
using namespace std;

#define size 10
int stack1[size]={0};
int stack2[size]={0};
int top1 =-1; //ye aage se start hoga 
int top2 = size; // ye piche se start hoga

void push_stack1(int num){
    //ek space toh free honi chahoye push karne ke liye 
    if ((top2-top1)>0)
    {
        top1++; //kyuki hum aage ja rahe h
        stack1[top1]=num;
    }
    else
    {
        cout<<"stack overflow"<<endl;
    }
}
void push_stack2(int num){
    //ek space toh free honi chahoye push karne ke liye 
    if ((top2-top1)>0)
    {
        top2--;  //kyuki hum push karke picche aa rahe h 
        stack2[top2]=num;
    }
    else
    {
        cout<<"stack overflow"<<endl;
    }
}

void pop_stack1(){
    if (top1==-1)
    {
        cout<<"underflow condition for stack1"<<endl;
    }
    else
    {
        int a = stack1[top1];
        top1--;
        cout<<"poped out element  = "<<a<<endl;
    }
}

void pop_stack2(){
    if (top2==size)
    {
        cout<<"underflow condition for stack2 "<<endl;
    }
    else
    {
        int a = stack2[top2];
        top2++;
        cout<<"poped out element  = "<<a<<endl;
    }
}

void display(){
    int temp = 0;
    while (temp<=top1)
    {
        cout<<stack1[temp]<<" ";
        temp++;
    }
    temp= size-1;
    while (top2<=temp )
    {
        cout<<stack2[temp]<<" ";
        temp--;
    }
}

int main(){
    push_stack1(1);
    push_stack1(2);
    push_stack1(3);
    push_stack1(4);
    push_stack1(5);
    push_stack1(6);
    push_stack1(7);
    push_stack2(8);
    push_stack2(9);
    push_stack2(10);
    push_stack2(11);
    pop_stack1();
    pop_stack2();
    display();
}