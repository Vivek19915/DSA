#include<stdio.h>
int main(){
    int n;
    printf("ENter siz eof aary\n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //now we do sorting
    for (int i = 0; i < n-1; i++)
    {
        // bool swaped  = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                /* code */
            }
            
        }
        
    }
    
    
}