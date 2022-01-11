#include<iostream>
using namespace std;

void walking(int src,int dest){
    cout<<" source "<<src<<" destination "<<dest<<endl;
    //base condition
    if (src == dest)
    {
        cout<<"ghaar aa gaya ";
        return ;
        //agr hum aesa return likhege toh 
        //loop apne aap end ho jayega
    }
    src++;
    return walking(src,dest);
    
}

int main(){
    int source ,destination;
    cin>>source;
    cin>>destination;
    walking(source,destination);
}