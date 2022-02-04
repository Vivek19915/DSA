// check whether the ith right most bit is one or zero
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enetr the numebr"<<endl;
    cin>>n;
    int i;
    cout<<"Enter the ith position"<<endl;
    cin>>i;
    n=n>>(i-1);
    if ((n&1)==1)
    {
        cout<< i<< " bit in "<<n<<" is 1"<<endl;
    }
    else{
        cout<< i<< " bit in "<<n<<" is 0"<<endl;
    }
    

}