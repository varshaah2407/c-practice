/* 
    A simple c program to find ASCII value of a Character
    author: Prateek Singh
*/

#include <stdio.h>
#include <conio.h>

int main()
{

    char c;

    printf("Enter a Character :");
    scanf("%c", &c);

    // display output
    printf("ASCII value of %c = %d", c, c);

    // hold screen
    getch();

    return 0;
}