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

    int item ;

    printf("Enter the item to be searched ?") ;
    scanf("%d", &item) ;

    int idx = -1 ;

    int lo = 0 ;
    int hi = n-1 ;

    while(lo <= hi)
    {
        int mid = (lo+hi)/2 ;

        if(item > arr[mid]) // right part
            lo = mid + 1 ;
        else if(item < arr[mid]) // left part
            hi = mid - 1 ;
        else
        {
            idx = mid ;
            break ;
        }

    }

    if(idx == -1)
        printf("%d is not present in array.", item) ;
    else
        printf("%d is present at %d index." , item, idx) ;


    return 0 ; 
}