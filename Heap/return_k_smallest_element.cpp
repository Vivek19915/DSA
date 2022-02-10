#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter elements in array in unsorted manner"<<endl;
    for (int i = 0; i < n  ; i++)
    {
        cin>>array[i];
    }
    int k  ;
    cout<<"Enter how much largest element u want to print"<<endl;
    cin>>k;
    //smallest mtlb  =  max heap
    priority_queue<int> maxheap;
    //now we traverse array
    for (int i = 0; i < n; i++)
    {
        maxheap.push(array[i]);
        if (maxheap.size()>k)
        {
            maxheap.pop();
        }
    }
    cout<<"elements of array are  = ";
    for (int i = 0; i < n  ; i++)
    {
        cout<<array[i]<< " ";
    }cout<<endl;
    
    //now k smallest element
    cout<<"K smallest element of array are"<<endl;
    for (int i = 0; maxheap.size()>0; i++)
    {
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }cout<<endl;
    
}