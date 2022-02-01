#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
struct node * head=  NULL;


void display(struct node * temp){
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int lenght(){
    int count=0;
    struct node* temp = head;
    while (temp!=0)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void find_middle_element(int length){
    struct node * temp = head;
    int middle = (length/2) +1;
    for (int i = 1; i < middle; i++)
    {
        temp=temp->next;
    }
    cout<<" middle element  = "<<temp->data;
}


int main(){
    int choice  =  1;
    while (choice)
    {
        struct node *temp,* newnode =  new struct node;
        cout<<"Enter the data"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if (head==NULL)
        {
            head = temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"to stop press 0"<<endl;
        cin>>choice;
    }

    display(head);
    int z = lenght();
    find_middle_element(z);
    
}
