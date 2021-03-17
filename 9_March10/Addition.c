#include<stdio.h>

int main()
{
    int rows ;
    int cols ;

    printf("Enter the no. of rows and cols ?") ;
    scanf("%d %d", &rows, &cols) ;
  
    int one[rows][cols] ;

    // take input
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("one[%d][%d] ? ", r, c) ;
            scanf("%d", &one[r][c]) ;
        }
    }

    int two[rows][cols] ;

    // take input
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("two[%d][%d] ? ", r, c) ;
            scanf("%d", &two[r][c]) ;
        }
    }

    // addition
    int res[rows][cols] ;

    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            res[r][c] = one[r][c] + two[r][c] ;
            printf("%d\t", res[r][c]) ;
        }

        printf("\n") ;
    }

    return 0 ;
}