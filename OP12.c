#include <stdio.h>

int main(void)
{
    int n, i;

    // Input n
    printf("Enter n: ");
    scanf("%d", &n);

    // Loop to print odd numbers
    for (i = 1; i <= n; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
