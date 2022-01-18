#include<iostream>
// #include <bits/stdc++.h>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    set<int> s;  //set created
    unordered_set <int> s1;   // here we created unorered set
    
    //to insert element in set we use insert function
    s.insert(1);
    s.insert(5);
    s.insert(16);
    s.insert(5);
    s.insert(9);
    s.insert(2);
    s.insert(1);

    s1.insert(1);
    s1.insert(5);
    s1.insert(16);
    s1.insert(5);
    s1.insert(9);
    s1.insert(2);
    s1.insert(1);

    for (auto i:s)
    {
        cout<<i<<endl;
    }

    //here it will print in unordered way
    // for (auto i:s1)
    // {
    //     cout<<i<<endl;
    // }

    s.erase(s.begin());
    // therfore it will remove first element we get after sorted
    for (auto i:s)
    {
        cout<<i<<endl;
    }
}