#include<stdio.h>

int main()
{
    int n1 , n2 ;

    printf("Enter two numbers ?") ;
    scanf("%d%d", &n1, &n2) ;

    int min ;

    if(n1 > n2)
        min = n2 ;
    else
        min = n1 ;

    int ans ;

    int count = 1 ;
    while(count <= min)
    {

        if(n1%count == 0 && n2%count ==0)
            ans = count ;

        count = count + 1 ;
    }
    
    printf("HCF of %d and %d is %d", n1, n2, ans) ;
    
    return 0 ;
}