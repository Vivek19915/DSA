#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int* )malloc(5*sizeof(int));
    ///////note we can use pointers as an array in this
    for (int i = 0; i < 6; i++)
    {
        scanf("%d",&ptr[i]);
        ////or//////
        // scanf("%d",ptr +i);
    
    }
    ptr  = realloc(ptr,15 *sizeof(int));
    /////////here we have to store 10 more integers 
    ////////and 5 are revious one therefore total 15 to be needed
    for (int  i = 5; i < 15; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d",ptr[i]);
    }
    
    
}