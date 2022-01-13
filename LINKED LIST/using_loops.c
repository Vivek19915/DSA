//creating ll using loops
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;//here we make keyword node

//head pointer of data type struct node


int main(){
    node *head,*newnode,*temp;
    head  = NULL;
    int x= 1;
    while (x)
    {
        newnode = (node*)malloc(sizeof(struct node));
        printf("ENter data please \n");
        scanf("%d",&newnode->data);
        newnode->next =NULL;
        if (head==NULL){
            head  = temp =newnode;  //aur iske baad head change nhi hoga 
            //yahi imp h traversing ke liye ke apna head change nhi hona chahiye
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter 0 to quit \n");
        scanf("%d",&x);
        
    }
    
    temp =  head ;//kyuki head me abhi bhi first node ka dreess present h 
    //
    while (temp!=NULL)
    {
        printf("%d",temp->data);
       temp  = temp->next;// this will help in traversing
    }
    
    

}