#include<stdlib.h>
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elemrnts \n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*__SIZEOF_INT__);  //this is important syntax
    for (int  i = 0; i < n; i++)
    {printf("Enter elements \n");   //here we tae input using pointers 
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i <n; i++)
    {
        printf("%d",*(ptr+i));  //here *(ptr =i)  denotes value at address ptr+i and we simply print it 
    }
    
}