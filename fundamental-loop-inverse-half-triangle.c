#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 10, i, j;

    for (i = n; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}