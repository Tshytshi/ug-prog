#include <stdio.h>

int main(void)
{
    int number = 42;

    while (number <= 1337)
    {
        printf("%d", number);
        if (number + 2 <= 1337)
            printf(" ");
        number += 2;
    }
    printf("\n");
    return (0);
}