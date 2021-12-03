#include <stdio.h>
#include <conio.h>

int checkPrimeNumber(int n);

int main()
{
    int n1, n2, i, prime;

    printf("Enter First Integer: ");
    scanf("%d", &n1);

    printf("Enter Second Integer: ");
    scanf("%d", &n2);

    printf("\nPrime numbers between %d and %d are: ", n1, n2);

    for (i = n1 + 1; i < n2; i++)
    {
        prime = checkPrimeNumber(i);

        if (prime == 1)
        {
            printf("%d ", i);
        }
    }

    getch();
    return 0;
}

int checkPrimeNumber(int n)
{
    int j, prime = 1;
    for (j = 2; j <= n / 2; j++)
    {
        if (n % j == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
