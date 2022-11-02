#include<iostream>
using namespace std;

void permute(string str,int l ,int r){
    if(l==r){
        //mtlb kii hum string ke end me pahuch gaye h 
        cout<<str<<endl;
        return ;
    }
    else
    {
        for (int i = l; i < r; i++)
        {
            swap(str[l],str[i]);//first sur i ko swap karege
            permute(str,l+1,r);
            swap(str[l],str[i]);//taki vapas aate time jo uper swap kiya tha vo khatam ho jaye
        }   
    }
}

int main(){
    string str = "abcdefghi";
    permute(str,0,str.length());
}