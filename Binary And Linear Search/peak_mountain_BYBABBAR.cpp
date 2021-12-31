#include<iostream>
using namespace std;
int main(){
    int array[7]={3,4,5,6,7,1,0};
    //now we write code
    int start =0,end = 6;
    int mid  = start +(end-start)/2;
    while (start<end){
    
         if (array[mid]<array[mid+1])
        {
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid  = start +(end-start)/2;  
    }cout<< mid;
}