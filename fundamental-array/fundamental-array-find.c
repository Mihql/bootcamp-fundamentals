#include <stdio.h>

int main(void)
{
    int a[100] = {2, 5, 6, 4}, i, n = 4, key = 5;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            printf("value found at index: %d", i + 1);
            break;
        }
    }
}