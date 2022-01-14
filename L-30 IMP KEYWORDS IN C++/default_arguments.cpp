#include<iostream>
using namespace std;
// here start is our default variable
//agr start ko koi value nhi di jayegi as argument then vo apne aap usko 0 le kar code run kar lega
void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);


    return 0;
}