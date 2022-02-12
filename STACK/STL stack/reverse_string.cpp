#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    //char ka stack since we are storing char values
    stack<char> stack ;
    string s="vivek kumar choudhary";
    for (int i = 0; i < s.size(); i++)
    {
        stack.push(s[i]);
    }
    vector<char> v;
    //now we store this reverse string in vextor
    for (int i = 0; stack.size()>0; i++)
    {
        char ch = stack.top();
        v.push_back(ch);
        stack.pop();
    }

    //ab hame reverse order me vector me store kar liya h 
    //now simply print it
    for (int i = 0; i<v.size(); i++)
    {
        cout<<v[i];
    }cout<<endl;

}