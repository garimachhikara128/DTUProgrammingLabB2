#include<stdio.h>

void addition(int , int) ;

int main()
{
    printf("hello\n") ;
    addition(10, 20) ;
    printf("bye\n") ;

    return 0 ;
}

void addition(int a , int b)
{
    int sum = a + b ;
    printf("%d\n", sum) ;
}


