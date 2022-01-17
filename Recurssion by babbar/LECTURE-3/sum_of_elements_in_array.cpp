#include<iostream>
using namespace std;
//here we use default argument for index 
int findsum1(int arr[],int size,int sum,int index=0){
    //to stop RR
    
    if (size==0)
    {
        return sum;
    }
    
    else
    {sum  =sum +arr[index];
    index++;
        return findsum1(arr,size-1,sum,index);
    }   
}
//when u use pointer in arguent of array use index always =0
int findsum2(int *arr,int size,int sum){
    //to stop RR
    
    if (size==0)
    {
        return sum;
    }
    
    else
    {sum  =sum +arr[0];
        return findsum2(arr+1,size-1,sum);
    }   
}

int main(){
        int arr[6]={1,2,3,4,5,6};
        cout<<findsum1(arr,6,0)<<endl;
        cout<<findsum2(arr,6,0);
}