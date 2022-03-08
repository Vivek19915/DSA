#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    int array[] ={1,3,4,12,4,5,2,232,33} ;
    queue<int> q;
    stack<int> s;
    for (int i = 0; i < 9 ; i++)
    {
        q.push(array[i]);
        int a  = q.front();
        q.pop();
        s.push(a);
    }
    for (int i = 0; i < 9 ; i++)
    { 
        //now we reverse it 
        int b= s.top();
        q.push(b);
        s.pop();
    }
    for (int i = 0; i < 9 ; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    
}