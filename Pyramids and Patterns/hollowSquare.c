#include <stdio.h>
#include <conio.h>

int main()
{
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("\n");

    int k,l;
    for (k=1;k<=row;k++)
    {
        for (l=1;l<=row;l++)
        {
            if (k==1 || k==row)
            {
                printf("* ");
            }
            else if (l==1 || l==row)
            {
                printf("*");
                for (int i=1;i<row;i++)
                {
                    printf(" ");
                }
            }
            else
                printf(" ");

        }
        printf("\n");
    }

    return 0;

}
