#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node*head= NULL;

void insert(int data){
    struct node *newnode,*temp;
    newnode  =  new struct node;
    newnode->data=data;
    newnode->next=NULL;

    if (head==NULL)
    {
        head= temp =newnode;
    }
    else
    {
        temp->next = newnode;
        temp=newnode;
    }
}


void display(struct node *head){
    while (head)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}

void insertElementAtSortedPosition(int n,struct node * temp){
    for (int i = 0; temp->next; i++)
    {
        if (temp==NULL || temp->data>n)
        {
            struct node*p = new struct node;
            p->next=temp->next;
            temp->next=p;
            p->data=n;
            break;
        }
        
    }
    

}

int main(){
    int x =1;
    int data;
    // while (x)
    // {
        
    //     cout<<"Enter sorted data"<<endl;
    //     cin>>data;
    //     insert(data);
    //     cout<<"To stop press-0"<<endl;
    //     cin>>x;
    // }


    insert(1);
    insert(7);
    insert(8);
    insert(14);
    insert(123);
    struct node*temp=head;
    cout<<"Enter new data"<<endl;
    cin>>data;
    insertElementAtSortedPosition(data,temp);
    display(head);
}
