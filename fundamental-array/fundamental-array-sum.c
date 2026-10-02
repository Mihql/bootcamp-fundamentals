#include <stdio.h>

int main(void)
{
    int a[5] = {5, 5, 5, 5, 5}, i, j, max = 5, sum = 0;

    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    printf("sum of array: %d", sum);
}