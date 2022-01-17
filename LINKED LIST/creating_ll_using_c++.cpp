#include<iostream>
using namespace std;
//creating node
struct node
{
    int data;
    struct node *nextnode;
};

void display(struct node *temp ){
    if (temp!=0)
    {
        cout<<temp->data<<endl;
        //RR
        // this is tail recurssion therfore it will print in right order 
        //to print in reverse order use head recurssions
        display(temp->nextnode);
    }
    

}

int main(){
    int choice =1;
    // now we create three struct node type pointers
    // 1-> head --- jo hamesa first node ka address store karega aur kabhi change nhi hoga
    // 2-> newnode -- ye haesa new node jo hum heap me nbanaye ge uska address store karega
    // 3-> temp -- ye temp pointer h jo ki head ka kaam karega 
    struct node *head,*newnode,*temp;
    head = NULL;
    //ab hum loop me jayega using ehile loop
    while (choice)
    {
        //ab hum new node me heap bana kar uska address store karege in newnode
        newnode = new struct node;
        cout<<"Enter data "<<endl;
        cin>>newnode->data;
        newnode->nextnode =NULL;
        if (head==NULL)
        {
            head  = temp = newnode; //newnode ka address head aur temp dono me aa gaya h 
        }
        else
        {
            temp->nextnode = newnode;  //jo first vala node ka  next tha usme new node ka address store ho agaya
            temp = newnode;   // aur temp me bhi new node ka address store hogaya 
            //jisse huma ur aage bad sake node banane me 
        }

        cout<<"If u wish to enter more data enter 1 otherwise to stop enter 0"<<endl;
        cin>>choice;
    }
    // now we display our data 
    //hum head ko kabhi change nhi karege jab bhi head ki jarurat hogi hum had ki vale temp me daal diya karege aur temp ko ehad ki tarah use karege
    //therfore


    temp = head ;
    cout<<"data"<<endl;

    //DISPLAY USING LOOP
    // while (temp!=0)
    // {
    //     cout<<temp->data<<" "<<endl;
    //     temp = temp->nextnode;
    //     //ab temp em hi nextnode ka address store ho jayega aur jab tak temo null nhi ho jata 
    //     //tab tak loop chalta rahega 
    // }


    //DISPLAY USING RECURSSIVE FUNCTION
    display(temp); // or display(head);



}