// for eg our stack is 12345
// and someone said to insert no 9
// then our final stack is 
// 912345

//here we use recurssion to do this question

#include<iostream>
#include<stack>
using namespace std;

void insert_num_at_bottom(stack<int> &s, int num){
    //base condition
    if (s.empty())
    {   //mltb stack apna empty ho gya h 
        s.push(num);
        return ;
    }

    int a= s.top();
    s.pop();

    //recurssive call
    insert_num_at_bottom(s,num);
    
    s.push(a);
}

int main(){
    int n;
    cout << "Enter the no of number u want to put in stack" << endl;
    cin >> n;
    stack<int> s1;
    cout << "push element in stack" << endl;
    for(int i =0 ;i<n ;i++)
    {
        int a;
        cin >> a;
        s1.push(a);
    }
    int num;
    cout<<"Enter the number u want to insert at bottom of stack"<<endl;
    cin>>num;

    insert_num_at_bottom(s1,num);

    //now we print our stack
    cout<<"NEW STACK"<<endl;
    while (s1.size())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
    cout<<endl;
}