#include <stdio.h>
#include <conio.h>

int main()
{
    int row, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\n");

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= row; k++)
        {
            if (i == 1 || i == row || k == 1 || k == row)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    getch();
    return 0;
}

/* OUTPUT:

Enter the number of rows: 10

         * * * * * * * * * *
        *                 *
       *                 *
      *                 *
     *                 *
    *                 *
   *                 *
  *                 *
 *                 *
* * * * * * * * * *


 */