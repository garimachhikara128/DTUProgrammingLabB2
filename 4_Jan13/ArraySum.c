#include<stdio.h>

int main()
{
    int n ;

    printf("No. of elements in array ?") ;
    scanf("%d", &n) ;

    // array create : n elements
    int arr[n] ; 

    // array input
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] : " , i) ;
        scanf("%d", &arr[i]) ;
    }

    // sum logic
    int sum = 0 ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        sum = sum + arr[i] ;
    }

    printf("Sum of elements of array is : %d" , sum) ;

    return 0 ; 
}