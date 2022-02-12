// question== delete middle element of  stack
// APPROACH:-
// sabse phle hame ek stack diya jayega
// jisme element phle se hi hoge
// hame uss satck ke middle element ko remove karna h

// toh ham isme ek vecter ka use karege
// hame stack ke element ko pop karke
// unko vector me store kar lege
// aur middle index tak traverse karege
// aur usko remove karke
// vapas se jo elements vector me unko stack me push ar dege

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of number u want to put in stack" << endl;
    cin >> n;
    stack<int> s1;
    vector<int> v;
    cout << "push element in stack" << endl;
    for(int i =0 ;i<n ;i++)
    {
        int a;
        cin >> a;
        s1.push(a);
    }
    // the index of middle element = n/2;
    int index = n / 2;
    for (int i = 0; i < index; i++)
    {
        // ab hum element ko pop karke vectore me dalte jayege
        int a = s1.top();
        // cout<<a<<endl;
        v.push_back(a);
        s1.pop();
    }
    // ab hum uss elemnt par aagaye h loop ke baad
    // thefore we remove it and not store it
    s1.pop();
    // now we put element of vecter in stack again
    int size = v.size();
    for (int i = size - 1; i >= 0; i--)
    {
        s1.push(v[i]);
    }
// now we simply print our stack
    while (s1.size()>0)
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }cout<<endl;
    
    

}