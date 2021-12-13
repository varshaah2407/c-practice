/* 
    A simple c program to check input value is alphabet or not.
    
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    printf("Enter a Character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet.", c);
    }
    else
    {
        printf("%c is not an alphabet.", c);
    }

    getch();
    return 0;
}