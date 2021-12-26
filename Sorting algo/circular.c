#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
    
}*first=NULL;

void create(int a[],int n){
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->link=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data= a[i];
        t->link=first;
        last->link=t;
       
        last=t;
    }
}

void print(struct node *p){
    while(p==first){
        printf("%d ",p->data);
        p=p->link;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8};
    create(a,8);
    print(first);
    return 0;
}