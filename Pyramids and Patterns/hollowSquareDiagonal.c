#include <stdio.h>
#include <conio.h>

int main()
{
    int row, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if (i == 1 || i == row || j == 1 || j == row - i + 1 || i == j || j == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}

/* OUTPUT:

Enter the number of rows: 10

* * * * * * * * * *
* *             * *
*   *         *   *
*     *     *     *
*       * *       *
*       * *       *
*     *     *     *
*   *         *   *
* *             * *
* * * * * * * * * *

*/