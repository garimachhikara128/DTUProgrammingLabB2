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

    // display
    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] == item)
            idx = i ; 
    }

    if(idx == -1)
        printf("%d is not present in array.") ;
    else
        printf("%d is present at %d index." , item, idx) ;

    return 0 ; 
}