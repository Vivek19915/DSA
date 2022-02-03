//using hash tables
#include<iostream>
using namespace std;

int main(){
    char a[] = "findingingvivekkumarchoudhary";
    // cout<<"Duplicates elements are"<<endl;
    // here we make hash table of size 26 
    // sibce only lowercase alplakbet are present
    int hash[26]={0};
    for (int i = 0; a[i]!='\0'; i++)
    {
        hash[a[i]-97]++;
    }
    //now we traverse hash table
    for (int i = 0; i<26; i++)
    {
        if (hash[i]>1)
        {
            char ch =i+97;
            cout<<"duplicate element is = "<< ch<<" times = "<<hash[i]<<endl;
        }
    }
    cout<<"all others present one time"<<endl;
}