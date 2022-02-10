#include<iostream>
#include<queue>
using namespace std;

int main(){
    int array[] = {3,-1,6,7,9,1,10};
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    //sice here smallest == max heap
    //aur max heap ascneding oreder me karti jisme top element is larger tha 
    //below element 
    priority_queue<int> maxheap;
    //now we traverse theorgh loop
    for (int  i = 0; i < 7; i++)
    {
        maxheap.push(array[i]);
        if (maxheap.size()>k)
        {
            maxheap.pop();
        }
    }
    cout<<maxheap.top()<<endl;
    

}