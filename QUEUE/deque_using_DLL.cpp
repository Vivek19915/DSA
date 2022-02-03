#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node* previous;
};
//left_pointer always point to left most node
struct node * left_pointer = NULL;
//right_pointer always point to right most node
struct node * right_pointer = NULL;

void enqueue_at_front(){
    struct node * newnode = new struct node;
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->previous=NULL;
    if ( left_pointer == NULL)
    {
        left_pointer =right_pointer= newnode;
    }
    else
    {
        left_pointer->previous = newnode;
        newnode->next=left_pointer;
        left_pointer = newnode;
    }
}

void enqueue_at_end(){
    struct node * newnode = new struct node;
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->previous=NULL;
    if ( right_pointer == NULL)
    {
         right_pointer  =left_pointer= newnode;
    }
    else
    {
        right_pointer->next=newnode;
        newnode->previous = right_pointer;
        right_pointer = newnode;
    }

}

void dequeue_at_front(){
    if (left_pointer==NULL)
    {
        cout<<"Nothing present to dequeud"<<endl;
    }
    else
    {
        struct node * temp = left_pointer;
        left_pointer = left_pointer->next;
        left_pointer->previous=NULL;
        free(temp);
    }
}
void dequeue_at_end(){

    if (right_pointer==NULL)
    {
        cout<<"Nothing present to dequeud"<<endl;
    }
    else
    {
        struct node * temp = right_pointer;
        right_pointer = right_pointer->previous;
        right_pointer->next=NULL;
        free(temp);
    }

}


void peek_left(){
    cout<<"peek left element = "<<left_pointer->data<<endl;
}

void peek_right(){
    cout<<"peek left element = "<<right_pointer->data<<endl;
}

void display(){
    struct node * temp = left_pointer;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl; 
}


int main(){
    int choice =1;
    while (choice)
    {
        cout<<"Press 1 to enqueue at front "<<endl;
        cout<<"Press 2 to enqueue at end "<<endl;
        cout<<"Press 3 to dequeue at front "<<endl;
        cout<<"Press 4 to dequeue at end "<<endl;
        cout<<"Press 5 to display data"<<endl;
        cout<<"Press 6 to peek left data"<<endl;
        cout<<"Press 7 to peek right data"<<endl;
        int press;
        cin>>press;
        if (press==1)
        {
            enqueue_at_front();
        }
        else if (press==2)
        {
            enqueue_at_end();
        }
        else if (press==3)
        {
            dequeue_at_front();
        }
        else if (press==4)
        {
            dequeue_at_end();
        }
        else if (press==5)
        {
            display();
        }
        else if (press==6)
        {
            peek_left();
        }
        else
        {
            peek_right();
        }
        cout<<"to stop press 0 "<<endl;
        cin>>choice;
    }
}