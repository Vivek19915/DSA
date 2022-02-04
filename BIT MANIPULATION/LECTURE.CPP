#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int count =0;
    int k =n;
    while (n)
    {
        if ((n&1)==0)
        {
            n=n|1;
            break;
        }
        else
        {
        n=n>>1;
            count++;
        }
        
        
    }
    int z= n<<count;
    cout<<z<<endl;

    
}