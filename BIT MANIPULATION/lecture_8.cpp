// determine wether a number is power of 2 or not


// by obseervation 
// you can see that jo bhi number 2 ki power me hoga 
// usme bas ek hi set bit milegi 
// mtlb ek hi bit 1 hogi baki sari zero hogi

#include<iostream>
using namespace std;

int main(){
    int n=64;
    int count =0;
    while (n>0)
    {   //this is code to count no of 1 in binary of n
        n=n&(n-1);
        count++;
    }
    if (n<0)
    {
        cout<<"NO"<<endl;
    }
    
    else if (count==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    
}