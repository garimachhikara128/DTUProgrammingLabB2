#include<stdio.h>

int main()
{
    int rows ;
    int cols ;

    printf("Enter the no. of rows and cols ?") ;
    scanf("%d %d", &rows, &cols) ;
  
    int arr[rows][cols] ;

    // take input
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("arr[%d][%d] ? ", r, c) ;
            scanf("%d", &arr[r][c]) ;
        }
    }

    // display
    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("%d\t", arr[r][c]) ;
        }

        printf("\n") ;
    }

    // wave display
    for(int c = 0 ; c < cols ; c++)
    {
        if(c % 2 == 0)
        {
            for(int r = 0 ; r < rows ; r++)
                printf("%d ", arr[r][c]) ;
        }
        else
        {
            for(int r = rows - 1 ; r >=0 ; r--)
                printf("%d ", arr[r][c]) ;
        }
    }

    return 0 ;
}