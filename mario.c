#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int stairs = 0;
    do {
    printf("Number of stairs: ");
    stairs = GetInt();
    }
    while ( stairs < 0 || stairs > 23 ) ;
    
    for (int i = 1 ; i <= stairs ; i++)
    {
        for (int n = stairs-i ; n > 0 ; n--)
        {
            printf(" ");
        }
        for (int m = 0 ; m <= i ; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}