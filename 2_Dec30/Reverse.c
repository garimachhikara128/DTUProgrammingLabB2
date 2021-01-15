#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    int temp = n ;
    int ans = 0 ;

    while(n != 0)
    {
        int rem = n % 10 ;
        ans = ans * 10 + rem ;
        n = n / 10 ;
    }

    printf("Reverse of %d is %d" , temp, ans ) ;
    
    return 0 ;
}