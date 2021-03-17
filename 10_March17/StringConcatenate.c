#include<stdio.h>

int main()
{
    char str1[20] ;

    printf("Enter the 1st string ?") ;
    scanf("%s", str1) ;

    char str2[20] ;

    printf("Enter the 2nd string ?") ;
    scanf("%s", str2) ;

    int len = 0 ;
    while(str1[len] != '\0')
        len++ ;

    int i = len ;
    int j = 0 ;

    while(str2[j] != '\0')
    {
        str1[i] = str2[j] ;

        i++ ;
        j++ ;
    }

    str1[i] = '\0' ;

    printf("String 1 : %s , String 2 : %s", str1, str2) ;   

    return 0 ;
}