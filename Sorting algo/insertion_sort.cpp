#include<iostream>
using namespace std;

void insertion_sort(int arr[],int size){
    //hum i==1 se islye start kar rahe h kyuki i=0 
    //mtlb ek element present toh vo toh already sorted hoga hi 
    for(int i = 1;i<size;i++){
        int key  = arr[i];
        //j=i-1 kyuki hum hamesa key ko uske phle vale se compare karege
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        //jese hi hum loop se bahar aaye 
        //arr[j]<key therefore arr[j+1] me key ko daal dege
        arr[j+1]=key;
    }
}
void display(int arr[],int n ){
    for(int i = 0 ;i <n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    int i = 0 ;
    cin>>n;
    int arr[n];
    while(i<n){
        cin>>arr[i];
        i++;
    }
    insertion_sort(arr,n);
    display(arr,n);
}