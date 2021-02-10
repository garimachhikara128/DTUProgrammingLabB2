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

    // bubble sort
    for(int count = 0 ; count <= n-2 ; count++)
    {
        for(int j = 0 ; j <= n-count-2; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }

    // display
    for(int i = 0 ; i <= n-1 ; i++)
        printf("%d\t" , arr[i]) ;
        
    return 0 ; 
}