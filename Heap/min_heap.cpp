#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    //minheap
    priority_queue<int,vector<int>,greater<int> > minheap;

    cout<<"Enter elements in array in unsorted manner"<<endl;
    for (int i = 0; i < n  ; i++)
    {
        cin>>array[i];
        minheap.push(array[i]);
    }
    
    cout<<"min heap ka sorted manner ascending order h  "<<endl;
    int size = minheap.size();
    for (int i = 0; i < size; i++)
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }cout<<endl;
}