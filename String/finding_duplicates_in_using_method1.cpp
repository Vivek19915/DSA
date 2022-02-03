#include<iostream>
using namespace std;

int main(){
    char a[] = "finding";
    cout<<"Duplicate elements are"<<endl;
    for (int i = 0; a[i]!='\0'; i++)
    {
        for (int j = i+1; a[j]!='\0'; j++)
        {
            if (a[i]==a[j])
            {
                cout<<a[i]<<" ";
            }
            
        }
        
    }
     
}