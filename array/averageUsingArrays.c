#include <stdio.h>
#include <conio.h>

int main()
{
    int totalNumbers, i;
    float num[100], sum, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &totalNumbers);

    for (i = 0; i < totalNumbers; ++i)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / totalNumbers;
    printf("\nAverage = %.2f", avg);

    getch();
    return 0;
}