
#include <stdio.h>

int main(void)
{
    int i, j, n;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print reverse star pattern
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
