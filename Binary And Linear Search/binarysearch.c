#include<stdio.h>

int binarySearch(int size, int array[size], int key){
        int start = 0;
        int end  = size -1; 
        int mid  = (start +end )/2;

        while (start<=end)
        {
            if (array[mid]==key)
            {
               return mid;
            }
            else if (array[mid]>key)
            {
                end = mid -1;
            }
            else if (array[mid]<key)
            {
                start = mid +1;
            }
            
        mid  = (start +end )/2;
        }
        
        return -1; //since key is not present in array therfore return -1
}



int main(){
    printf("ENter size of array \n");
    int size ;
    scanf("%d",&size);
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        printf("ENter inputs in array in ascending order");
        scanf("%d",&arr[i]);
    }
    printf("ENter key \n");
    int key;
    scanf("%d",&key);
    // int binarySearch(int size,){
            int index = binarySearch(size,arr,key);
            printf("%d",index);
    // }
    

}