#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;


int main(){
int x=1;
head=NULL;
while (x)
{
    newnode = new struct node;
    cout<<"Enter data"<<endl;
    cin>>newnode->data;
    newnode->next=NULL;
    //🔥🔥🔥taki next node null ho jaye aur jab hum traverse kare to stop 
    //karne ke kaam ayega 🔥🔥🔥🔥
    if (head==NULL)
    {
        head =temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    cout<<"to stop press 0"<<endl;
    cin>>x; 
}
temp = head;
int sum=0,length = 0;

while (temp!=0)
{
    sum=sum+temp->data;
    length++;
    cout<<"<<length="<<"sum= "<<sum<<endl;
    temp=temp->next;
}

cout<<"length "<<length<<"sum= "<<sum;

}