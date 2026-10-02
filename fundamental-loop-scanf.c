#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        sum = sum + i;
    }
    printf("result=%d", sum);
}