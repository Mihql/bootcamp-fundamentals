#include <stdio.h>

int main(void)
{
    int a[100], i, n = 4, key = 5;
    for (i = 0; i < n; i++)
    {
        printf("enter value in array");
        scanf("%d", &a[i]);
        if (key == a[i])
        {
            printf("value found at index: %d", i + 1);
            break;
        }
    }
}