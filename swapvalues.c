#include <stdio.h>

void swap(int *x, int *y);

int main(void) {
  int number1 = 10;
  int number2 = 30;
  
  printf("number1 is: %i and number2 is: %i\n", number1, number2);
  
  swap(&number1, &number2);  // take values as reference
  
  printf("Now number1 is: %i and number2 is: %i\n", number1, number2);
}

void swap(int *x, int *y) {
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
