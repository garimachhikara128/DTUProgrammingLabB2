#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the string ?") ;
    scanf("%s", str) ;

    int len = 0 ;
    while(str[len] != '\0')
        len++ ;

    int i = 0 ;
    int j = len-1 ;

    while(i < j)
    {
        int temp = str[i] ;
        str[i] = str[j] ;
        str[j] = temp ;

        i++ ;
        j-- ;
    }

    printf("Reverse string is %s", str) ;

    return 0 ;
}