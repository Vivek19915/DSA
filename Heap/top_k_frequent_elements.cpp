#include<iostream>
#include<queue>

using namespace std;

int main(){
    int k;
    cout<<"Enetr the value of k"<<endl;
    cin>>k;
    int array[10] = {1,1,1,4,4,30,30,30,30,2};
    //and now we do hashing to count frequency of lements
    int hashtable[31]={0};
    for (int i = 0; i < 10 ; i++)
    {
        hashtable[array[i]]++;
    }
    // ab hum hashtable ko heap me dalege
    //and we have to top 
    //therfore we use min heap;
    //aur yaha hum key ko bhi lege 
    //therefore we use pair here
    priority_queue<pair<int,int>  ,vector<pair<int,int> > ,greater<pair<int,int> > > minheap;
    //now we traverse hastbale and push frequency in heap
    for (int i = 0; i < 31; i++)
    {
        int key  =  hashtable[i];
        int value  = i;
        if (hashtable[i]!=0)
        {
            minheap.push(make_pair(key,value));
            if (minheap.size()>k)
            {
                minheap.pop();
            }   
        } 
    }
    int size  = minheap.size();
    cout<<"top "<< k<< " frequent elements "<<endl;
    while (size>0)
    {
        cout<<minheap.top().second<<" ";
        minheap.pop(); 
        size--;
    }
}