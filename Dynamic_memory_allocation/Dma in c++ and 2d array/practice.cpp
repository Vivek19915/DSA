// frist we create array of m*n;
// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter no of rows"<<endl;
//     cin>>m;
//     int n;
//     cout<<"enter no of coloumn"<<endl;
//     cin>>n;

//     //creation of rowsin heap
//     int **array   =  new int *[m];//m kyuki rows create karega ye itni
//                                   // aur * kyuki new array ka address store karega 
    
//     //now creation of coloumn
    //  cout<<"enter elements in array"
//     for (int i = 0; i < m; i++)
//     {
//         array[i] = new int[n];
//         //ab har array ke pointer me new array jo ki value store 
//         //karegi uska address jayega 
//         //aur ek 2d array generate hogi
//     }


//     //now taking input from user in 2d array
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>array[i][j];
//         }
        
//     }
    

//     // now we print array
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    

//     // now we relaese memory from heap
//     for (int i = 0; i < m; i++)
//     {
//         delete [] array[m];
//         // ab ye sare coloum ko hara degi
//     }
//     delete [] array;
//     //ab ye sabse phli vali array jisme hamne 
//     //pointer store kiye the usko bhi hata degi

// }






// now we create JAGGED ARRAY
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter no of rows"<<endl;
    cin>>rows;

    // creation of rows in heap 
    int **array  = new int *[rows];

    // now we create array to store size of each coloumn
    int * col  =  new int [rows];

    // taking length of ech coloumn from user  
    cout<<"Eneter size of ech coloum";
    for (int i = 0; i < rows; i++)
    {
        cin>>col[i] ;
        // kyuki jitni rows h utne baar isko chalana hi padega 
    }


    // now we take input from user in aarray
    cout<<"Eneter elements in arrayß";
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < col[i] /*col[i] will give aize of first row*/ ; j++)
        {
            cin >> array[i][j] ;
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < col[i] /*col[i] will give aize of first row*/ ; j++)
        {
            cout<< array[i][j]<<" " ;
        }
        cout<<endl;
    }
    
    
}
