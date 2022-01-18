#include<iostream>
#include<string>
using namespace std;

bool checkPlaindrome(string str,int size,int index=0){
    if (index>size )
    {
        return true;
        //if our this cond is true 
        // mtlb hamare code ne kabhi necche vala 
        // if execute hi nhi kiya 
        // vo sidha else par ja raha 
        // mtlb ye palindrome h 
    }
    if (str[index]!= str[size])
    {
        return false;
    }
    else{
    // cout <<"fhgfhj"<<endl;
        return checkPlaindrome(str,size--,index++);
    }
}  
    

int main(){
    string str = "qweewq";
    // getline(cin,str);
    bool z = checkPlaindrome(str,6,0);
    if(z){
        cout<<"it is palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
    

}