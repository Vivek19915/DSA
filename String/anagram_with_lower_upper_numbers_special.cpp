#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[]="decimal123ASD!@#$";
    char b[]="medical!@#321SAD$";
    //sice it only contain all character 
    //therfore we make hadh table of size 128 
    int hash[128]={0};
    for (int i = 0; a[i]!='\0';  i++)
    {
        hash[a[i]]++;
        //a[i] index par increment kar dege hum
    }
    for (int i = 0; b[i]!='\0';  i++)
    {
        hash[b[i]]--;
        //b[i]-97 index par decrement kar dege hum
    }
    int count=0;
    for (int i = 0; i<128; i++)
    {
        if (hash[i]!=0)
        {
            count++;
        }
        
    }
    if (count>0)
    {
        cout<<"It is not anagram"<<endl;
    }
    else
    {
        cout<<"It is anagram"<<endl;
    }
}