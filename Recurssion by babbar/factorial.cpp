#include<iostream>
using namespace std;

// now we create recurssive function
int factorial(int n){
    //base condition
    if (n==0)
    {
        return 1;
    }
    //recursive relation - 1

    else
        return  n*factorial(n-1);
    
    // or 
     //recursive relation - 2


    // int choti = factorial(n-1);
    // int badi = n * choti;
    // return badi;
}

int main(){
    int n;
    cin>>n;
    cout<< factorial(n);

}

