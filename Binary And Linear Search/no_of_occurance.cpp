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
    
    cout<<"therfore occurance of 4 = "<< lastOccurance(array,7,4) - firstOccureance(array,7,4) +1<<endl;
}