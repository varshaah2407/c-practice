/* 
    C Program to Check Whether a Number is Prime or Not.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, i;
    int prime = 0; // 0 means false and 1 means true

    printf("Enter a Number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; ++i)
    {
        // condition for non-prime
        if (num % i == 0)
        {
            prime = 1;
            break;
        }
    }

    if (prime == 0)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
    }

    getch();
    return 0;
}