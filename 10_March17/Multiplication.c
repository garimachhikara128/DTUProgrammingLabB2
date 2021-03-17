#include<stdio.h>

int main()
{
    int r1 ;
    int c1 ;

    printf("Enter the no. of rows and cols for 1st matrix ?") ;
    scanf("%d %d", &r1, &c1) ;
  
    int one[r1][c1] ;

    // take input
    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c1 ; c++)
        {
            printf("one[%d][%d] ? ", r, c) ;
            scanf("%d", &one[r][c]) ;
        }
    }

    int r2 ;
    int c2 ;

    printf("Enter the no. of rows and cols for 2nd matrix ?") ;
    scanf("%d %d", &r2, &c2) ;
  
    int two[r2][c2] ;

    // take input
    for(int r = 0 ; r < r2 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            printf("two[%d][%d] ? ", r, c) ;
            scanf("%d", &two[r][c]) ;
        }
    }

    // multiply
    int res[r1][c2] ;

    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            int sum = 0 ;
            for(int k = 0 ; k < c1 ; k++)
            {
                sum += one[r][k] * two[k][c] ;
            }
            res[r][c] = sum ;
            printf("%d\t", res[r][c]) ;
        }

        printf("\n") ;
    }

    return 0 ;
}