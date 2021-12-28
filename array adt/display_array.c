// here we diaplay array using structure 
// and here we creat earray in heap
#include<stdio.h>
#include<stdlib.h>
// now we create structure
struct display_array
{
    int *a;
    int size;
    int length;
};
int main(){
    struct display_array arr;
    printf("Eneter the size of array \n");
    scanf("%d",&arr.size);
    //now we create array in heap
    arr.a = (int *)malloc(arr.size*sizeof(int));
    //now array is created now we need to put input in it
    printf("Enter all elements in array\n") ;
    for (int i = 0; i < arr.size; i++)
    {   //this line is imp
        scanf("%d",&arr.a[i]);
        //this line is imp that how we create array of structure
    }
    //for diaplaying elements
    for (int i = 0; i < arr.size; i++)
    {
        printf("%d",arr.a[i]);
    }   
}