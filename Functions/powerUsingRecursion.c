#include <stdio.h>
#include <conio.h>

int power(int base, int a);

int main()
{
    int base, n;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter power number: ");
    scanf("%d", &n);

    printf("\n%d^%d = %d", base, n, power(base, n));
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}