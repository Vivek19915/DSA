#include<iostream>
using namespace std;

int power(int num,int pow){
    if (pow == 0)
    {
        return 1; //kyuki  kisi ki bhi power 0  par vo 1 hota h 
    }
    else
        return num*power(num,pow-1);
}

int main(){
    int num,pow;
    cin>>num;
    cin>>pow;

    cout<<power(num,pow);

}