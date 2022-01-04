#include<iostream>
using namespace std;

int main(){
    // here we create 2d array;
    int rows,col;
    cout<<"Enter rows in array"<<endl;
    cin>>rows;
    cout<<"Enter column in array"<<endl;
    cin>>col;

    // now we vreate 2d array in heap
    int **arr = new int*[rows];
    // this will create rows number of pointers 
    // now in each row we pt array;


    for (int i = 0; i < rows; i++)
    {   //now ech pointer will indicate ech array in heap
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
           cin>>arr[i][j];
        }
        
    }

    //now print
    for (int i = 0; i < rows; i++)
    {   //now ech pointer will indicate ech array in heap
        
        for (int j = 0; j < col; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // note :- after creating memory memory in heap 
    // you need to clear it 
 //releasing memory
    for(int i=0; i<rows; i++) {
        delete [] arr[i];
    }   

    delete []arr;


}