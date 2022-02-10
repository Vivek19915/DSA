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
    //since largest == min heap banooo
    priority_queue<int,vector<int>,greater<int> > minheap;
    //now we traverse array
    for (int i = 0; i < n; i++)
    {
        minheap.push(array[i]);
        if (minheap.size()>k)
        {
            minheap.pop();
        }
    }

    cout<<"elements of array are  = ";
    for (int i = 0; i < n  ; i++)
    {
        cout<<array[i]<< " ";
    }cout<<endl;
    //now k largest element
    cout<<"K laregest element of array are"<<endl;
    for (int i = 0; minheap.size()>0; i++)
    {
        cout<<minheap.top()<<" ";
        minheap.pop();
    }cout<<endl;
    
    
}