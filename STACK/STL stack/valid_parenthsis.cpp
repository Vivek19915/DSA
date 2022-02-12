#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main(){
    // char paranthesis[] = "[()]{}{[()()]()}";
    // string paranthesis = "[(])";
    string paranthesis = "[[}[";
    // string paranthesis = "[]{}()";
    stack<char> s;
    for (int i = 0; paranthesis[i]!='\0'; i++)
    {
        if (s.empty())
        {
            s.push(paranthesis[i]);  
        }
        else
        {   
            if (paranthesis[i]==')' && s.top()=='(' ||
                paranthesis[i]==']' && s.top()=='[' ||
                paranthesis[i]=='}' && s.top()=='{')
            {
                s.pop();
            }
            else
            {
                s.push(paranthesis[i]);
            }
        }  
    }
    // cout<<s.empty()<<endl;
    if (s.empty())
    {
        cout<<"valid parenthesis"<<endl;
    }else
    {
        cout<<"invalid parenthesis"<<endl;
    }
}