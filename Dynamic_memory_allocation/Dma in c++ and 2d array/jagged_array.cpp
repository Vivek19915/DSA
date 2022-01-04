#include<iostream>
using namespace std;
int main(){
    int rows;
    cout << "Enter no of rows of array: ";
    cin >> rows;
    int *col = new int[rows]; /// array to store no of columns
    int **array=new int*[rows];   /// jagged array

    for(int i=0; i<rows; i++){

        cout<< "Enter no of col in row"<< i<< ": ";
        cin>> col[i];
        array[i]=new int[col[i]];
    }

    for(int i=0; i<rows; i++){

        for(int j=0; j< col[i]; j++){

            cout<<"Rows "<< i<<": Enter value"<< i*col[i]+j <<": ";
            cin>> array[i][j];
        }
    }
    cout<< "Showing all the Inputed data in a matrix form"<< endl;
    for(int i=0; i< rows ; i++){

        for(int j=0; j< col[i]; j++){
            cout<< array[i][j]<< " ";

        }
        cout<< endl;
    }
    
    cout<< "Dellocating the array..."<< endl;
    for(int i=0; i<rows; i++){
       delete [] array[i];

    }
    delete [] array;
    cout<< "done!";
    }