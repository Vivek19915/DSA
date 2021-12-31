#include<iostream>
using namespace std;
int gcd(int a ,int b){
    //agr dono me se koi bhi zero huaa 
    //toh dusra vala gcd ban jayega 
    if (a==0)
    {
        return b; //then b will be gcd
    }
    if (b==0)
    {
        return a;//then a will be gcd
    }

    //aur agr dono me se koi bhi zero nhi huaa
    // toh hame zero banana padega kisi aur ko
    // aur issse gcd me koi chage nhi aata h 
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
    //return b;
    //both return will give same
    
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
}