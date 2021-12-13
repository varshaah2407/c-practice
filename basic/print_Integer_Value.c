/* 
    A simple c program to Print an Integer value entered by User 
    
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // declare variables
    int number;

    printf("Enter a number :");

    // read and store input
    scanf("%d", &number);

    // display output
    printf("You entered: %d", number);

    // hold screen
    getch();

    return 0;
}