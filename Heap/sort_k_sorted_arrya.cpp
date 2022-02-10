#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int array[]={6,5,3,2,8,10,9};
    int k = 3;
    //here we use min heap
    priority_queue<int,vector<int>,greater<int> > minheap;
    vector<int> v;
    //now we traverse array
    //put element in heap
    //and also put elemnt in vecter in sorted form jab hum usko pop karege
    for (int i = 0; i < 7  ; i++)
    {
        minheap.push(array[i]);
        if (minheap.size()>k)
        {
            //top element vector me push kar do 
            //aur topp lement ko pop out kar do
            v.push_back(minheap.top());
            minheap.pop();
        }
    }
    //ab jo bach hue element rah gaye h heap me unhe bhi vecter me daal dege
    int size  =  minheap.size();
    for (int i = 0; i <size ; i++)
    {
        v.push_back(minheap.top());
        minheap.pop();
    }

    //ab hum simply vecter ko print kar dege 
    //aur hame sorted array mil jayegi in tc nlogk
    size =  v.size();
    for (int i = 0; i <size ; i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
    
    
}