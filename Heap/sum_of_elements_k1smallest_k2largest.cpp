// sum_of_elements_k1smallest_k2smallest

#include<iostream>
#include<queue>
using namespace std;

int kth_smallest(int arr[],int k,int size_of_array){
    //sice smallest = max heap
    priority_queue<int> maxheap;
    //now taverse arr and put element in heap
    for (int i = 0; i < size_of_array; i++)
    {
        maxheap.push(arr[i]);
        if (maxheap.size()>k)   
        {
            maxheap.pop();
        }
    }
    //now kth smalleast element is the elemnt at top of heap
    return maxheap.top();
}

int kth_largest(int arr[],int k,int size_of_array){
    //sice largest = min heap
    priority_queue<int,vector<int>,greater<int> > minheap;
    //now taverse arr and put element in heap
    for (int i = 0; i < size_of_array; i++)
    {
        minheap.push(arr[i]);
        if (minheap.size()>k)   
        {
            minheap.pop();
        }
    }
    //now kth smalleast element is the elemnt at top of heap
    return minheap.top();
}

int main(){
    int array[] = {3,1,12,5,15,11,24};
    int size_of_array= 7;
    int k1=4;
    int k2=6;
    int first  = kth_smallest(array,k1,size_of_array);
    int second  = kth_largest(array,k2,size_of_array);
    cout<<"Sum of elements bet " <<k1<< " smallest and "<<k2<< " largest"<<endl;
    int sum =0;
    for (int i = 0; i < size_of_array; i++)
    {
        if (array[i]>first && array[i]<second)
        {
            sum=sum+array[i];
        }
    }
    if (sum==0)
    {
        cout<<"no element is present between k1 and k2 "<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    
    
    ;
}