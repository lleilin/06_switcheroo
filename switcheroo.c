#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int a1[10];
  int a2[10];
  int i;

  int *a1p = a1;
  for (i = 0; i < 9; i++) {
    *(a1p + i) = rand();
  }
  *(a1p + 9) = 0;

  for (i = 0; i < 10; i++) {
    printf("a1 index %d: %d\n", i, *(a1p + i));
  }

  printf("\n");

  int *a2p = a2;
  for (i = 0; i < 10; i++) {
    *(a2p + i) = *(a1p + 9 - i);
  }

  for (i = 0; i < 10; i++) {
    printf("a2 index %d: %d\n", i, *(a2p + i));
  }

  return 0;
}
