#include<iostream>
using namespace std;
int main(){
    int array[7]={3,4,5,6,7,1,0};
    //now we write code
    int start =0,end = 6;
    int mid  = start +(end-start)/2;
    while (true)
    {
        if (array[mid]>array[mid+1] && array[mid]>array[mid-1])
        {
            cout<<mid;
            break;
        }
         if (array[mid]<array[mid+1])
        {
            mid++;
        }
        else{
            mid--;
        }  
    }
}