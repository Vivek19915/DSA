#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void pnc(string s ,int l , int h,int j){
    if (l==0 && h==0)
    {
        cout<<" "<<endl;
    }
    else
    {
        string k = s ;
        swap(k[l],k[j]);
        cout<<k<<endl;
        reverse(k.begin(), k.end());
        cout<<k<<endl;
        l++;
        j--;
        if (l==h )
        {
            l=0;
            h--;
            j=h-1;
        }
        pnc(s,l,h,j);   
    }
}

int main(){
    string s  = "abcd";
    int l = 0;
    int h = s.length()-1;
    pnc(s,l,h,0);

}