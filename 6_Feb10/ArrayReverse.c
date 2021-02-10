#include<stdio.h>
#include<limits.h>

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

    // reverse
    int i = 0 ;
    int j = n-1 ;

    while(i < j)
    {
        // swap
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j-- ;
    }
    

    // display
    for(int i = 0 ; i <= n-1 ; i++)
        printf("%d\t" , arr[i]) ;
        
    return 0 ; 
}