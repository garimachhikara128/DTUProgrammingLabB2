#include<stdio.h>

int factorial(int) ;

int main()
{

    printf("%d", factorial(5)) ;
    
    return 0 ;
}

// BP : n !
int factorial(int n)
{
    // Base Case
    if(n == 0)
        return 1 ;

    // SP : (n-1) !
    int fnm1 = factorial(n-1) ;

    // Work
    int fn = fnm1 * n ;

    return fn ;

}