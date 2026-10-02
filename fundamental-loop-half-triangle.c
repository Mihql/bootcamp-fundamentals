#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, n = 5;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n; n--, j--)
        {
            printf("*");
        }
        printf("\n");
    }
}