#include <iostream>
#include <queue>
#include<vector>
// typedef pair< int , pair< int , int > > ppi;
using namespace std;

int main()
{
    // four points are given
    int points[5][2] = {{1, 1}, {20, 10}, {3, 18}, {1, 2}, {0, 1}};
    // here we take the conkey of key
    // and we do it by using max heap kyuki hame ek hi sabse
    // largest key inkalini jo ki heap heap ke top par hogi

    // creating max heap
    priority_queue< pair< int , pair< int , int > > > maxheap;

    for (int i = 0; i < 5; i++)
    {
        // key =  distance bet point and origin
        int key = (points[i][0]) * (points[i][0]) + (points[i][1]) * (points[i][1]);

        // and this is how we push ppi
        maxheap.push(make_pair(key, make_pair(points[i][0], points[i][1])));
    }
    //now jo bhi apna top element hoga vahi sabse closest hoga origin ke 
    cout<<"farthest point to origin =  ";
    cout<<maxheap.top().second.first<<"  "<<maxheap.top().second.second<<endl;
}
