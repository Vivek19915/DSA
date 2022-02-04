// count the set bit (mtlb jo bit 1 h ) in a number
#include<iostream>
using namespace std;

int main(){
    int n = 10000;
    int count=0;
    // while (n>0)
    // {
    //     if ((n&1)==1)
    //     {
    //         count ++;
            
    //     }
    //     n=n>>1;
        
    // }

    //OPTIMAL SOLUTION
    while (n>0)
    {
        n=n&(n-1);
        count++;
    }
    
    cout<<count<<endl;
    
}