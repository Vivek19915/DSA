#include<iostream>
using namespace std;

struct node {
    int val;
    struct node * left;
    struct node * right;
    //now we create constructor
    node(int k){
        val = k;
        left = right = NULL;
    }
};

void create_binary_tree(){
    int data;
    cout<<"Enter the value of node"<<endl;
    cin>>data;
    if(data==-1)return;
    struct node * newnode = new node(data);
    create_binary_tree();
    create_binary_tree();
}

int main(){
    create_binary_tree();
}