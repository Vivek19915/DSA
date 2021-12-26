// here we reverse the array without using another array 
#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int start ,end;
    for (i = 0; i<=n-i-1; i++)
    {          int temp ;
             start = arr[i];
             end  = arr[n-i-1];
            // now we do swaping
            temp = arr[i];
            arr[i] = end;
            arr[n-i-1]  = temp;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
     
}