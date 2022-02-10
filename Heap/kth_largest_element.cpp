#include<iostream>
#include<queue>
using namespace std;

int main(){
    int array[] = {3,-1,6,7,9,1,10};
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    //sice here largest == min heap
    //aur min heap descending oreder me karti jisme top element is smaller tha 
    //below element 
    priority_queue<int,vector<int>,greater<int> > minheap;
    //now we traverse theorgh loop
    for (int  i = 0; i < 7; i++)
    {
        minheap.push(array[i]);
        if (minheap.size()>k)
        {
            minheap.pop();
        }
    }
    cout<<minheap.top()<<endl;
    

}