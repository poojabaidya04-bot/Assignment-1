#include <stdio.h>

int main(void)
{
    int n, i;
    int factorial = 1;

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Loop to calculate factorial
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    return 0;
