#include <stdio.h>
#include <conio.h>

int main()
{
    char character;

    printf("Enter a Character: ");
    scanf("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf("%c is lowercase vowel.");
    }
    else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        printf("%c is uppercase vowel.");
    }
    else
    {
        printf("%c is consonant.", character);
    }

    // hold screen
    getch();

    return 0;
}