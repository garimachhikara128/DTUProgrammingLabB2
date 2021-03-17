#include<stdio.h>

int main()
{
    char str1[20] ;

    printf("Enter string 1 ?") ;
    scanf("%s", str1) ;

    char str2[20] ;

    printf("Enter string 2 ?") ;
    scanf("%s", str2) ;

    int i = 0;

    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break ;

        i++ ;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
        printf("Equal") ;
    else
        printf("Not Equal") ;

}