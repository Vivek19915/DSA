#include<iostream>
using namespace std;
int gcd(int a ,int b){
    if (a==0)
    {
        return b; //then b will be gcd
    }
    if (b==0)
    {
        return a;//then a will be gcd
    }
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        if (b>a)
        {
            b=b-a;
        }   
    }
    return a;

}
int main(){
    cout<<"enter no of elements whose gcd u want to find"<<endl;
    int size;
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    //now we write code to find gcd
    int temp =0;
    for (int i = 0; i < size; i++)
    {
        temp  = gcd(temp,array[i]);
    }
    
    cout<<"gcd of all members ="<<temp;
}