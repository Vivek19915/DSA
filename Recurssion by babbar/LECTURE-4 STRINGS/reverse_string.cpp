#include<iostream>
#include<string>      //for using string class
using namespace std;


//here imp you have to use reference variable
void reverseString(string& str,int size,int index =0){
    //base case
    if (index>size)
    {
        return;
    }
    else
    {
        swap(str[index],str[size]);
        index++;
        return reverseString(str,size-1,index);
    }
}

//also done by returning string
string reverseString1(string str,int size,int index=0){
    //base case
    if (index>size)
    {
        return str;
    }
    else
    {
        swap(str[index],str[size]);
        index++;
        return reverseString1(str,size-1,index);
    }
}


int main(){
    string str  =  "vivek";
    //here to find length of string we can use str.length
    //and we can do so many operation on string using dot operater
    int size  = str.length()-1;
    reverseString(str,size);
    string newstr = reverseString1(str,size);
    cout<<str<<endl;
    cout<<"newstr="<<newstr<<endl;

}