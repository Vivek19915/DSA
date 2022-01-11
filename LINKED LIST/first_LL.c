#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node
    {
        int data;
        struct node *next;  //pointer pointing to struct node type of data
    };

    struct node *head;
    struct node *second;
    struct node *last;

    //now these pointer will point o a stuct node in heap
// here 3 node are created 
    head = (struct node*)malloc(sizeof(struct node)) ;
    second = (struct node*)malloc(sizeof(struct node)) ;
    last = (struct node*)malloc(sizeof(struct node)) ;

    head->data = 1;
    head->next = second;//now the pointer in node stores data of second node
    
    second->data=2;
    second->next=last;

    last->data =3;
    last->next = NULL;//it will stop link 



    //now we traverse it 
    while (head!=NULL)
    {
        printf("%d",head->data);
        head  = head->next;// this will help in traversing
    }
    
}