#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    /* String Declaration*/
    char name[20];

    printf("Enter your Name: ");
    scanf("%s", name);

    /*Displaying String*/
    printf("%s", name);

    getch();
    return 0;
}