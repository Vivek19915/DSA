#include<stdio.h>
int main(){
    int n,minIndex,temp = 0;
    printf("Enter size of aaray \n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("Enter %d element --",i+1);
        scanf("%d",&arr[i]);
    }

    // now we do sorting
    for (int  i = 0; i < n-1; i++)
    {
        minIndex  = i;
        for (int j = i+1; j< n; j++)
        {
            if (arr[minIndex]>arr[j])
            {
                minIndex = j;
            }
            
        } temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
     

    
}