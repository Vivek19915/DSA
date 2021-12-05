#include<stdio.h>
int main(){
    int n ,temp;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i=i+2)
    {
        if (n%2 == 0)
        {
            temp = arr[i +1];
            arr[i+1] = arr[i];
            arr[i] =temp;
        }
        else{
            temp = arr[i +1];
            arr[i+1] = arr[i];
            if (i<n-1)
            {
                arr[i]=temp;
            }   
        }   
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    
return 0;
}