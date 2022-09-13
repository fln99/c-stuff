#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *s = malloc(sizeof(int) * 4);
  
  *s = 10;
  *(s+1) = 20;
  *(s+2) = 30;
  *(s+3) = 40;
  
  for (int i = 0; i < 4; i++) {
    printf("%i\n", *(s+i));
  }
  
  free(s);
}
