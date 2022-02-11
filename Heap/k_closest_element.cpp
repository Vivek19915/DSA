#include<iostream>
#include<queue>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter elements in array "<<endl;
    for (int i = 0; i < n  ; i++)
    {
        cin>>array[i];
    }
    int k  ;
    cout<<"Enter how much closest element u want to find"<<endl;
    cin>>k;
    int x;
    cout<<"Enter the number jiske closest find karna h"<<endl;
    cin>>x;


    //since closest mtlb hame max heap use karni hogi 
    //aur yaha ham key ka use karge 
    //therfore we use pair here 
    //🔥🔥🔥
    priority_queue<pair<int,int> > maxheap;
    //🔥🔥🔥
    //now we traverse array and put element in heap 
    // on the basis of key 
    //mtlb key se basis par sorting hogi ab 
    for (int i = 0; i < n; i++)
    {
        //🔥🔥🔥ab hum key me absoulte diff lege element of array and number ka
        int key  = abs(array[i]-x);
        //🔥🔥🔥iss tarah se push hoge key and element
        maxheap.push(make_pair(key,array[i])); 
        if (maxheap.size()>k)
        {
            maxheap.pop();
        }
    }

    int size =  maxheap.size();
    while (size--)
    {   //🔥🔥🔥iss tarah se max heap ka second element jo ki apni array ka elemnt h print hoga🔥🔥🔥🔥
        cout<<maxheap.top().second<<" ";
        maxheap.pop();
    }cout<<endl;
}