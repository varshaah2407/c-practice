#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    getch();
    return 0;
}

/* OUTPUT:

Enter the number of rows: 10

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10

*/