// no of bits required to an numeber n
#include<iostream>
using namespace std;

int main(){
    int n = 10000;
    int count=0;
    for (; n>0; )
    {
        count ++;
        n=n/2;
        //agar hame numbers ke digits count karn ehone h toh 
        //hum n=n/10 karte  h 
        //similarly here we do n=n/2
    }
    cout<<count<<endl;
}