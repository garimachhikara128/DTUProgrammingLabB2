#include<stdio.h>

int main()
{
    int decimal ;

    printf("Enter Decimal No ?") ;
    scanf("%d", &decimal) ;

    int mult = 1 ; // 10 ^ 0 
    int ans = 0 ;

    while(decimal != 0)
    {
        int rem = decimal % 2 ;
        ans = ans + rem * mult ;

        decimal = decimal / 2 ;
        mult = mult * 10 ;
    }

    printf("Binary is %d", ans) ;
    
    return 0 ; 
}