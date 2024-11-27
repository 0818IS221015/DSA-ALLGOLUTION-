//1.	Write a program to count total number of negative numbers in an array./
#include <stdio.h>

int main()
{
    int arr[]= {1,-2,3,-4,5,-6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    
    for (int i =0; i<size; i++){
        if (arr[i]<0){
            count++;
        }
    }
    
    printf("Total number of negative numbers : %d\n",count);

}


