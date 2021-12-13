/* 
    A simple c program to check if an integer is even or odd.
    
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if (num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    getch();

    return 0;
}
