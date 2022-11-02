#include<iostream>
using namespace std;

int main(){
    int arr[20] = {1,4,5,7,2,4,5,7,9,0,6,4,3,10,2,4,7,0,9,1};
    //first  we find max elemnet in that arr
    int max=-1;
    for(int i =0;i<20;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    max = max +1;
    //now we make a new array that store the frequency of elements 
    int count[max];
    
    for(int i =0;i<max;i++){
        count[i] = 0;
    }
    
    for(int i =0;i<20;i++){
        count[arr[i]]++;
    }
    //now we modify the count array so  that we get tc O(n)
    for(int i =1;i<max;i++){
        count[i] = count[i]+count[i-1];
    }
    //now we make array that give sorted array to us of same size as of initial aaray
    int ans [20];
    // //now we traverse initial array from back
    for(int i = 19; i>=0; i--){
        int val = arr[i];
        count[arr[i]]--;
        ans[count[val]]=val;
        
    }
    for(int i = 0 ; i <20 ;i++){
        cout<<ans[i]<<" ";
    }
}