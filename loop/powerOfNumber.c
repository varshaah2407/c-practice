#include <stdio.h>
#include <conio.h>

int main()
{

    int base, exp;
    unsigned long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exp);

    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    printf("Answer = %.llu", result);

    getch();
    return 0;
}
