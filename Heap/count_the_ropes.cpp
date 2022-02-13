#include<iostream>
#include<queue>
using namespace std;

int main(){
    int ropes_lenght[]={1,2,3,4,5};
    int min_cost=0;
    //in such type of question we use min heap
    priority_queue<int,vector<int>,greater<int> > minheap;
    //ab sabse phle hum heap me sare element daal dege
    //aur uske baad processing part start hoga

    //therfore putting elements in heap
    for (int i = 0; i < 5   ; i++)
    {
        minheap.push(ropes_lenght[i]);
    }

    //now our processing part start
    //jab tak heap ka size 2 se gretaer hoga tab tak loppp chelga
    while (minheap.size()>=2)
    {
        int first  =  minheap.top();
        minheap.pop();
        int second  =  minheap.top();
        minheap.pop();
        //ab hum cost nikalege by adding sabse smallest 2 elments ka 
        //jo ki first and second me store h 
        //aur phir jo sum hoga usko phirse ke minheap me push kar dege
        min_cost = min_cost + first + second;
        //ye ssabse imp line h 
        //kyuki push hame first aur second ka sum karna h 
        minheap.push(first + second);
    }
    cout<<"mininum cost =  "<<min_cost<<endl;
}