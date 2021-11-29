/* 
    A Simple C Program to calculate Area and Circumference of a circle
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float radius, area, circumference;

    printf("Enter Radius :");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("\nArea = %f\nCircumference = %f\n", area, circumference);
    
    getch();
    return 0;
}