#include<stdio.h>

void PID(int , int) ;

int main()
{
    printf("hii\n") ;
    PID(1, 3) ;
    printf("bye\n") ;

    return 0 ;
}

void PID(int start, int n)
{   
    if(start == n+1)
        return ;

    printf("%d\n", start) ;
    PID(start+1 , n) ;
    printf("%d\n", start) ;

}