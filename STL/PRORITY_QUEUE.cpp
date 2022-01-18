#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap-> ISSE ELEMENST DESCENDING ORDER ME ARRANGE HO 
    //JAYEGE AUR TOP ELEMENET SABSE GREATER HOGA
    priority_queue<int> maxi;

    //min heap-> ISSE ELEMENST ASCENDING ORDER ME ARRANGE HO 
    //JAYEGE AUR TOP ELEMENET SABSE SMALLER HOGA
    priority_queue<int,vector<int>,greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(5);
    maxi.push(0);
    maxi.push(3);

    int size1 = maxi.size();   //yaha hamne alag se likha kyuki jab hum
                              // pop use karege toh maxi.size bhi change
                              //hoga jisse loop me error ayega
    for (int i = 0; i < size1; i++)
    {
        cout<<maxi.top()<<endl;   //to print max element and note isme front aur back jesa kuch nhi hota h 
        maxi.pop();               //to remove last element 
    }
    

    mini.push(1);
    mini.push(2);
    mini.push(5);
    mini.push(0);
    mini.push(3);

    int size2 = mini.size();   //yaha hamne alag se likha kyuki jab hum
                              // pop use karege toh maxi.size bhi change
                              //hoga jisse loop me error ayega
    for (int i = 0; i < size2; i++)
    {
        cout<<mini.top()<<endl;   //to print max element and note isme front aur back jesa kuch nhi hota h 
        mini.pop();               //to remove last element 
    }

}