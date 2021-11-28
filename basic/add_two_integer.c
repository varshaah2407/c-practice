/* 
    A simple c program to add two Integers value
    author: Prateek Singh
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // declare variables
    int number1, number2, sum;

    // read and store input
    printf("Enter first number : ");
    scanf("%d", &number1);
    printf("Enter second number : ");
    scanf("%d", &number2);

    // calculating sum
    sum = number1 + number2;

    // display output
    printf("%d + %d = %d", number1, number2, sum);

    // hold screen
    getch();

    return 0;
}