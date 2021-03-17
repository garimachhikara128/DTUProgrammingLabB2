#include<stdio.h>

void PI(int) ;

int main()
{
    printf("hii\n") ;
    PI(7) ;
    printf("bye\n") ;

    return 0 ;
}

// BP : 1 -> n
void PI(int n)
{   
    // Base Case
    if(n == 0)
        return ;

    // SP : 1 -> n-1
    PI(n-1) ;

    // Self Work
    printf("%d\n", n) ; 

}