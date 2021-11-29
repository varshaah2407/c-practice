/* 
   A simple C Program to Check Whether a Year is Lear Year or Common Year.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // not a leap year if divisible by 100
    // but not divisible by 400
    else if (year % 100 == 0)
    {
        printf("%d is a common year.", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    // all other years are not leap years
    else
    {
        printf("%d is common year.", year);
    }

    getch();

    return 0;
}