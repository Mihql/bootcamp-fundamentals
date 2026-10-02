#include <stdio.h>

int main(void)
{
    int a[5], i, n = 4; // size of array

    for (i = 0; i <= n; i++)
    {
        printf("enter number");
        scanf("%d enter number", &a[i]);
    }

    for (i = 0; i <= n; i++)
    {
        printf("%d array values \n", a[i]);
    }
}
