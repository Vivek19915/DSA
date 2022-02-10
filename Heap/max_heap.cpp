#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    //minheap
    priority_queue<int> maxheap;

    cout<<"Enter elements in array in unsorted manner"<<endl;
    for (int i = 0; i < n  ; i++)
    {
        cin>>array[i];
        maxheap.push(array[i]);
    }
    
    cout<<"min heap ka sorted manner descending order h  "<<endl;
    int size = maxheap.size();
    for (int i = 0; i < size; i++)
    {
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }cout<<endl;
}