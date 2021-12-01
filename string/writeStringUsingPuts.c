#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    // String Declaration
    char name[20];

    puts("Enter your Name: ");
    
    // take string from user
    gets(name);

    // write string
    puts(name);

    getch();
    return 0;
}