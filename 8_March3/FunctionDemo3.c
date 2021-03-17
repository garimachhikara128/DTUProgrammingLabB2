#include<stdio.h>

int addition(int , int) ;

int main()
{
    printf("hello\n") ;

    int x = 10 ;
    int y = 20 ;
    int res = addition(x, y) ;
    printf("%d\n", res) ;

    printf("bye\n") ;

    return 0 ;
}

int addition(int a , int b)
{
    int sum = a + b ;
    return sum ;
}


