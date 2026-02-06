#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");

    for (int x = 1; x <= n; x++)
    {
        printf("%d\n", x);
    }

    return 0;
}
