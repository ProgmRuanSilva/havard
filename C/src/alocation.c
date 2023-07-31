#include "../lib/mylib.c"
#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int m;
  int* a;

  int* b = malloc(sizeof(int));
  a = &m;
  a = b;
  m = 10;
  *b = m + 2;
  free(b);
  *a = 11;
}

// Remember:
// 1 - malloc all times need be free
// 2 - just free one time
// 3 - never alocate one value in memory was free'd.
