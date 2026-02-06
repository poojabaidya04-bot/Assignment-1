#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    for (i = 1; i <= 10; i = i + 1)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
