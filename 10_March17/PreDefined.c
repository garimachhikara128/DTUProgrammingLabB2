#include<stdio.h>
#include<string.h>

int main()
{

    char str[20] = "code" ;
    char str1[20] = "dtu" ;

    // printf("Length : %d\n", strlen(str)) ;
    // strrev(str) ;
    // printf("Reverse : %s\n", str) ;

    // printf("Compare : %d\n", strcmp(str, str1)) ;
    strcat(str, str1) ;
    printf("Concatenate : %s %s" ,str, str1) ;

    return 0 ;
}