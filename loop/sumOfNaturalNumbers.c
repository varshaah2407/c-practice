#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }

    printf("\nSum of %d natural numbers : %d", n, sum);

    getch();
    return 0;
}
