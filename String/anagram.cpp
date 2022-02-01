#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[]="decimal";
    char b[]="medical";
    //sice it only contain lowercse character 
    //therfore we make hadh table of size 26
    //size 26 lowercase character are present 
    int hash[26]={0};
    for (int i = 0; a[i]!='\0';  i++)
    {
        hash[a[i]-97]++;
        //a[i]-97 index par increment kar dege hum
    }
    for (int i = 0; b[i]!='\0';  i++)
    {
        hash[b[i]-97]--;
        //b[i]-97 index par decrement kar dege hum
    }
    int count=0;
    for (int i = 0; i<26; i++)
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