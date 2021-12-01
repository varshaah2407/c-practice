#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char string1[60];
    char string2[60];

    printf("Enter first String :");
    gets(string1);

    printf("Enter Second String :");
    gets(string2);

    strcat(string1, string2);
    printf("\nOutput string after concatenation: %s", string1);

    getch();
    return 0;
}