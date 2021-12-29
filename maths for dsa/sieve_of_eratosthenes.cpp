//this method is imp because here we dont need isPrime function 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    //yaha hamne sare me true kar diya h 
    for (int i = 0; i <= n; i++)
    {
        array[i]=true;
    }
    for (int i = 2; i <= n; i++)
    {
        if (array[i]==true)
        {
            cout<<i<<" ";
            //aur yaha par jitne bhi 2 ke multiple the vo sare hamne neglect kar diye taki 
            //unse check na karna padgega ab
            for (int j = i*2; j <=n; j=j+i)
            {
                array[j] = false;
            }
            
        }
        
    }
    
    
}