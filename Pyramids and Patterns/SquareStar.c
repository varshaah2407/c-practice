#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}

/* OUTPUT:

Enter the number of rows: 10

* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *

*/