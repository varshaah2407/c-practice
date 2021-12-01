#include <stdio.h>
#include <conio.h>

int main()
{
    char c;

    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("%c ", c);
    }

    getch();
    return 0;
}