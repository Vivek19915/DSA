#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int> > mineheap;
    for (int i = 0; i <3; i++)
    {
        int a;
        cin>>a;
        mineheap.push(a);
    }
    int first ,second,third;
    first = mineheap.top();
    mineheap.pop();
    second = mineheap.top();
    mineheap.pop();
    third = mineheap.top();
    int sum ;
    if (first == second && second==third && third == first)
    {
        sum = first + second -1;
    }
    else
    {
        sum= first+ second;
    }
    cout<<sum<<endl;
    
}