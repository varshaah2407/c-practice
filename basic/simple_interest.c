#include <stdio.h>
#include <conio.h>

int main()
{

    float p, n, r, si;

    // take input from user
    printf("Enter Principle Amount : ");
    scanf("%f", &p);
    printf("Enter Annual rate : ");
    scanf("%f", &r);
    printf("Enter Time (year) : ");
    scanf("%f", &n);

    //calculate simple intrest
    si = p * n * r / 100;

    // print results
    printf("\n\nSimple Intrest : %f", si);
    printf("\nPrinciple Amount : %f", p);
    printf("\nTotal Value : %f", si + p);

    // hold screen
    getch();

    return 0;
}