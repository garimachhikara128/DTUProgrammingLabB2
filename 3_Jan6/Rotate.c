#include<stdio.h>

int main()
{
    int n , rot ;

    printf("Enter N ?") ;
    scanf("%d", &n) ;

    printf("Enter Rotations ?") ;
    scanf("%d", &rot) ;

    // number of digits ?
    int nod = 0 ;
    int temp = n ;

    while(temp != 0)
    {
        nod = nod + 1 ;
        temp = temp / 10 ;
    }

    // 10 ^ nod-1
    int mult = 1 ;

    int count = 1 ;
    while(count <= nod -1)
    {
        mult = mult * 10 ;
        count = count + 1 ;
    }

    // Rotate ?
    int r = 1 ;
    while(r <= rot)
    {
        int ld = n % 10 ; // 6
        int rest = n / 10 ; // 12345

        int ans = ld * mult + rest ; // 600000 + 12345 = 612345

       // printf("%d. %d\n", r, ans) ;

        n = ans ;
        r = r + 1 ;
    }

    printf("Rotated no. is %d\n", n) ;

    return 0 ; 
}