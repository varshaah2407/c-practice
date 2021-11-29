/* 
    A Simple C Program to Generate Multiplication Table
*/


#include <stdio.h>
#include <conio.h>

int main() {

  int n, i;

  printf("Enter a Number: ");
  scanf("%d", &n);

  for (i = 1; i <= 10; ++i) {
    printf("\n%d X %d = %d ", n, i, n * i);
  }

  getch();
  return 0;
}
