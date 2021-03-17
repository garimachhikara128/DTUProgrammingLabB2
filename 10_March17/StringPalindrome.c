#include<stdio.h>

int main()
{
    char str[20] ;

    printf("Enter the string ?") ;
    scanf("%s", str) ;

    int len = 0 ;
    while(str[len] != '\0')
        len++ ;

    int flag = 0 ;

    int i = 0 ;
    int j = len - 1 ;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 1 ;
            break ;
        }

        i++ ;
        j-- ;
    }

    if(flag == 1)
        printf("Not Palindrome") ;
    else
        printf("Palindrome") ;

    return 0 ;
}