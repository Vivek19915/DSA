#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int* )malloc(6*sizeof(int));
    ///////note we can use pointers as an array in this
    for (int i = 0; i < 6; i++)
    {
        scanf("%d",&ptr[i]);
        ////or//////
        // scanf("%d",ptr +i);
    
    }
    for (int  i = 0; i <6; i++)
    {
        printf("%d",ptr[i]);
        ////or////
        printf("%d",*(ptr+i));
    }
    
    
}