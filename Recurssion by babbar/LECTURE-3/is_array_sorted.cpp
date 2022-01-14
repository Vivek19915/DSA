#include<iostream>
using namespace std;

//here concept is that 
// arr[i] and arr[i+1]are in monotonic order then arrya will be sorted

bool isSortedbabbar(int arr[],int size){
    if (size==0 || size==1)
    {
        return true;
        //kyuki agr koi array h jiski size hi 0 ya 1 h 
        //toh usko sort karne ki koi zarurat hi nhi h vo toh phle 
        //se hi sorted hogi 
        //thats why we return true here
    }
    if (arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        return isSortedbabbar(arr+1,size-1);
        //here we increase go to next element of array and put is as with index zero
    }
}



bool isSortedme(int arr[],int size,int index){
    if (size==0 || size==1)
    {
        return true;
        //kyuki agr koi array h jiski size hi 0 ya 1 h 
        //toh usko sort karne ki koi zarurat hi nhi h vo toh phle 
        //se hi sorted hogi 
        //thats why we return true here
    }
    if (arr[index]>arr[index+1])
    {
        return false;
    }
    else
    {   index++;
        return isSortedme(arr,size-1,index);
        //here we increase go to next element of array and put is as with index zero
    }
}

int main(){
    int arr[6]={1,2,3,9,5,6};
    cout<<isSortedbabbar(arr,6);
    cout<<isSortedme(arr,6,0);
}