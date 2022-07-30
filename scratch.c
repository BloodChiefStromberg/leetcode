#include <stdio.h>
#include <stdlib.h>

int main() {
  int *array = malloc(sizeof(int) * 2);
  array[1] = 2;
  array[0] = 1;
  printf("%d, %d\n", array[0], array[1]);
  return 0;
}
