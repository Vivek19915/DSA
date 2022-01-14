#include<iostream>
using namespace std;

int linearSearchme(int *arr,int size,int key,int index ){
    
    if (size==0)
    {
        return -1; //mtlb key present nhi array me 
    }
    if (arr[index]==key)
    {
        return index;
    }
    else{
        index++;
        
        return linearSearchme(arr,size-1,key,index);
        //here we passing same complete array and increasing index by 1 to help us to compare
    }  
}

int linearSearchbabbar(int *arr,int size,int key){
    
    if (size==0)
    {
        return -1; //mtlb key present nhi array me 
    }
    if (arr[0]==key)
    {
        return 1 /*mtlb prsent h key*/ ;
    }
    else{
       
        
        return linearSearchbabbar(arr,size-1,key);
        //here we passing same complete array and increasing index by 1 to help us to compare
    }  
}

int main(){
    int arr[5]={1,2,3,4,5};
    int key  = 2;
    int z = linearSearchme(arr,5,key,0);
    int y = linearSearchbabbar(arr,5,key);
    cout<<z<<" "<<y<<endl;
}