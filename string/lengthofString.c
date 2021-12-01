#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char text[225];

    // take string from user
    puts("Enter some text: ");
    gets(text);

    printf("\nLength of Text: %d.", strlen(text));

    getch();
    return 0;
}