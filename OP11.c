#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Enter n: ");

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
