#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?") ;
    scanf("%d", &n) ; // 57123

    int temp = n ; // 57123
    int nod = 0 ;

    while(n != 0) // 57123 5712 571 57 5 0
    {
        nod = nod + 1 ; // 1 2 3 4 5
        n = n / 10 ; // 5712 571 57 5 0
    }

    printf("No. of digits in %d is %d", temp , nod) ;

    return 0 ; 
}