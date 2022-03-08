#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    int array[] ={1,3,4,12,4,5,2,232,33} ;
    queue<int> q;
    for (int i = 0; i < 9 ; i++)
    {
        q.push(array[i]);
    }
    stack<int>s;
    int k ;
    cout<<"ENter value of k "<<endl;
    cin>>k;
    //first remove k lement from queue and put it in satck
    for (int i = 0; i < k; i++)
    {
        int a = q.front();
        q.pop();
        s.push(a);
    }
    //ab stack ke sare lements ko queue me push kar do 
    //jo ki picche push hoge
    for (int i = 0; i < k; i++)
    {
        int a = s.top();
        s.pop();
        q.push(a);
    }

    //ab ko starting ke (n-k)  elements h unko
    //vapas se puiche kar dena h 
    //taki reversed vale aage aa jaye
    for (int i = 0; i < 9-k; i++)
    {
        int a = q.front();
        q.pop();
        q.push(a);
    }
    
    //now printing revesed queue
    for (int i = 0; i < 9 ; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
    

    

}