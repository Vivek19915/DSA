#include<iostream>
using namespace std;

int main(){
    char a[] = "asdaassSSDD123233331   #$^&*$#";
    int hash[128]={0};
    for (int i = 0; a[i]!='\0'; i++)
    {
        hash[a[i]]++;
    }
    //now we traverse hash table
    for (int i = 0; i<128; i++)
    {
        if (hash[i]>1)
        {
            char ch = i;
            cout<<"duplicate element is = "<< ch<<" times = "<<hash[i]<<endl;
        }
    }
    cout<<"all others present one time"<<endl;
    return 0;
}