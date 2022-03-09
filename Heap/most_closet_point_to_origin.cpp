#include <iostream>
#include <queue>
#include<vector>
// typedef pair< int , pair< int , int > > ppi;
using namespace std;

int main()
{
    // four points are given
    int points[5][2] = {{1, 1}, {2, 1}, {3, 18}, {1, 2}, {0, 1}};
    // here we take the conkey of key
    // and we do it by using min heap kyuki hame ek hi sabse
    // smallest key inkalini jo ki heap heap ke top par hogi

    // creating min heap
    priority_queue<pair< int , pair< int , int > >, vector<pair< int , pair< int , int > > >, greater<pair< int , pair< int , int > > > > minheap;

    for (int i = 0; i < 5; i++)
    {
        // key =  distance bet point and origin
        int key = (points[i][0]) * (points[i][0]) + (points[i][1]) * (points[i][1]);

        // and this is how we push ppi
        minheap.push(make_pair(key, make_pair(points[i][0], points[i][1])));
    }
    //now jo bhi apna top element hoga vahi sabse closest hoga origin ke 
    cout<<"closest point to origin =  ";
    cout<<minheap.top().second.first<<"  "<<minheap.top().second.second<<endl;

}
