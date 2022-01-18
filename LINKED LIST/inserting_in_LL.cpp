#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
// here i uses reference variable for head pointer
void insertBegning(struct node* &head){
    struct node *p = new struct node;
    cout<<"insert data at beginning"<<endl;
    cin>>p->data;
    p->next=head;
    head =  p;//kyuki ab p firs me aa chuka me 
}
//when you want to  insert at particular position
//aur yaha hum refernece varicable use nhi karege kyuki hamara head vahi hona chahiye
void insert(struct node* head,int position ){
    struct node *p = new struct node;   //new node which  is going to be insert
    struct node* temp = head;
    for (int i = 1; i < position-1; i++)
    {
        temp =temp->next;
    }
        p->next = temp->next;
        temp->next =p;
        cout<<"enter data at position ="<<position<<endl;
        cin>>p->data;
}

void inserAtend(struct node * head){
    struct node *p = new struct node;   //new node which  is going to be insert
    struct node* temp = head;
    for (int i = 1; temp->next; i++)
    {
        temp=temp->next;    //ab ye temp last node ka adress stroe karega jiske next me null me 
                            //isliye ye loop ban ho jayega 
    }
    
        p->next = temp->next;
        temp->next =p;
        cout<<"enter data at end ="<<endl;
        cin>>p->data;
    
    }
    
        




int main(){
    struct node *head,*newnode,*temp;
    head = NULL;
    int choice = 1;
    while (choice)
    {
        newnode = new struct node;
        cout<<"Enter data"<<endl;
        cin>>newnode->data;
        newnode->next = NULL;
        if (head==NULL)
        {
            head=temp=newnode; //mtln head me new node ka address daal do 
        }
        else
        {   //agr head null nhi h mtlb bahar huaa h 
        // toh uper vale node{jo ki temp ke denote ho raha h } ke next me new node ka address daal do 
        // aur uske baad temp me newnode daal do
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"want to stop press 0"<<endl;
        cin>>choice;
    }

    // insertBegning(head);
    // int posi;
    // cout<<"enter position u want to insert "<<endl;
    // cin>>posi;
    // insert(head,posi);
    inserAtend(head);
    temp =head;
    while (temp!=0)
{
    cout<<temp->data<<" "<<endl;
    temp=temp->next;
}
    

}