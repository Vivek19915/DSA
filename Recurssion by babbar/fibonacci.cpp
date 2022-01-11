#include<iostream>
using namespace std;
int fibonacci(int num){
    int z;
    // cout<<z;
    //base condition
    if (num==0)
    {
        return 0;
    }
    if (num==1)
    {
        return 1;
    }
    else
     z = fibonacci(num-1)+fibonacci(num-2);
    return z;
    
    
    
}

int main(){

    cout<<"Enter  terms u want to find in fibonacci"<<endl;
    int num;
    cin>>num;
    cout<<fibonacci(num);
    
}