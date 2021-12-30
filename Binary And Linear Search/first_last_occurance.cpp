// You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
// Now, your task is to find the first and last occurrence of ‘K’ in ARR.
// Note :
// 1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. ARR may contain duplicate elements.
// For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
// Input Format
// The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case contains two single-space separated integers ‘N’ and ‘K’, respectively.

// The second line of each test case contains ‘N’ single space-separated integers denoting the elements of the array/list ARR.
// Output Format :
// Return two single-space separated integers denoting the first and the last occurrence of ‘K’ in ARR, respectively.
// Note:
// You do not need to print anything; it has already been taken care of. Just implement the given function.
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 5000
// 0 <= K <= 10^5
// 0 <= ARR[i] <=10^5

// Time Limit : 1 second
// Sample Input 1:
// 2
// 6 3
// 0 5 5 6 6 6
// 8 2
// 0 0 1 1 2 2 2 2
// Sample Output 1:
// -1 -1 
// 4 7




//here we have to find first and last occurance of 4
#include<iostream>
using namespace std;

// for arugument as array yahi tarika hota h arguments leneka
int firstOccureance(int array[],int size_of_array,int key){
        int start  = 0;
        int end  = size_of_array -1;
        int answer  =-1;
        
        // now we put condition jab tab loop run hoga 
        while (start <=end)
        {      int mid  =  start + (end -start)/2;
            if ( array[mid] == key)
            {
                answer = mid;
                //aur hum first occurance dhund rahe h toh hum left me jayege
                //therfore
                end = mid -1;
            }
            //aur agr arr[mid] ,,key ke equal nhi hota h toh uske bhi condition likhni padegi
            //therfore
            if (array[mid]<key)
            {
                start =  mid +1;
            }
            if (array[mid]>key)
            {
                end  = mid -1;
            }
        } return answer;   
}



int lastOccurance(int array[],int size_of_array,int key){
        int start  = 0;
        int end  = size_of_array -1;
        int answer  =-1;
        
        // now we put condition jab tab loop run hoga 
        while (start <=end)
        {      int mid  =  start + (end -start)/2;
            if ( array[mid] == key)
            {
                answer = mid;
                //aur hum last occurance dhund rahe h toh hum right me jayege
                //therfore
                start = mid +1;
            }
            //aur agr arr[mid] ,,key ke equal nhi hota h toh uske bhi condition likhni padegi
            //therfore
            if (array[mid]<key)
            {
                start =  mid +1;
            }
            if (array[mid]>key)
            {
                end  = mid -1;
            }
        } return answer;   
}

int main(){
    int array[]={1,2,3,4,4,4,5};
    cout<<"first occurance of 4 is at index "<< firstOccureance(array,7,4)<<endl;
    cout<<"last occurance of 4 is at index "<< lastOccurance(array,7,4)<<endl;
    

}