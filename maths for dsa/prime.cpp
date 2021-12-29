#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n<=1)
    {
        return 0;
    }
    //we not include 1 and 0 because they are already non prime numbers
    for (int  i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            // tab vo number non prime ho jayega 
            return false;
        }
           
    }
    //varna vo prime hoga 
    return true;

}
int main(){
    int n;
    // cout<<"hello";
    cin>> n;
    if (isPrime(n)==true)
    {
        /* code */cout<<"number " ; cout<<n ;cout<<" is prime";
    }else
    cout<<"numebr is non prime number";
    
    
}