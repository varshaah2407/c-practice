#include <stdio.h>
#include <conio.h>

int main()
{

    // declare variables 
    int num, i;
    unsigned long long factorial = 1;

    // take input from user 
    printf("Enter a value : ");
    scanf("%d", num);

    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    // print result 
    printf("Factorial of %d = %llu", num, factorial);

    return 0;
}
   