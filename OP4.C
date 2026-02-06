#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter a number: ");

    printf("Increment = %d\n", ++x);
    printf("Decrement = %d\n", --x);

    return 0;
}
