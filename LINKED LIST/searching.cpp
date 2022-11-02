// we have 2 searching methods 
// 1 is linear search and other one is binary search 
// here applying binary search is not possible 
// kyuki hum ll me mid me nhi ja sakte 
// therfore we apply only linear search here



#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
};


struct node* rrlinearSearch(struct node * p,int key){
    if (p==NULL)
    {
        return NULL;
    }
    else
    {
        if (p->data==key)
        {
            return p;
        }
        else
        {
            return rrlinearSearch(p->next,key);//VVV imp line
        }   
    }
}

struct node* linearSearch(struct node * p,int key){
    while (p!=NULL)
    {
        if (p->data == key)
        {
            return p;  //since we are returning adresss 
            //here function typecast is struct node
            break;
        }
        p=p->next;
        
    }
    return NULL;
}



int main(){
    struct node *head,*newnode,*temp;
    head  = NULL;
    int x =1;
    while (x)
    {
        newnode = new struct node;
        cout<<"Enter data"<<endl;
        cin>>newnode->data;
        newnode->next =NULL;
        //🔥🔥🔥taki next node null ho jaye aur jab hum traverse kare to stop 
        //karne ke kaam ayega 🔥🔥🔥🔥
        if (head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"to stop press 0 else press 1"<<endl;
        cin>>x;
    }
    
    temp = head;
    int key;
    cout<<"enter the key to find"<<endl;
    cin>>key;
    cout<<"address"<<linearSearch(temp,key)<<endl;
    cout<<"using recurcive"<<rrlinearSearch(temp,key)<<endl;
}
    

