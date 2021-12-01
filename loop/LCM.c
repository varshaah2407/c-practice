/* 
    A Simple C Program to Find LCM of two Numbers.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int number1, number2, maximum;

    printf("Enter First Number: ");
    scanf("%d", &number1);
    printf("Enter Second Number: ");
    scanf("%d", &number2);

    // Find maximum number
    if ((number1 > number2))
    {
        maximum = number1;
    }
    else
    {
        maximum = number2;
    }

    while (1)
    {
        if (maximum % number1 == 0 && maximum % number2 == 0)
        {
            printf("The LCM of %d and %d is %d.", number1, number2, maximum);
            break;
        }
        maximum++;
    }

    getch();
    return 0;
}