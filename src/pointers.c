#include "../lib/mylib.c"
#include <stdio.h>

int main(void) {
// & is pointer to adress of varible
// * is pointer to value of varible (go to pointer) then we cant interact witch it.
// pointers is adress in memory
  int k;
  printf("k = %i\n", k);
  k = 5;
  printf("k = %i\n", k);
  
  int* pk;
  printf("pk = %p\n", pk);
  pk = &k;
  printf("pk = %p\n", pk);

//this is the way to get a value of poniter reference.
  int a = 15;
  int *b = &a;

  printf("value of a is: %i\n", *b);

//this mode they're changes the values.
  *b = 35;
  printf("the new value of b is: %i\n", *b);

  int m;
  m = 4;
  b = &m;
  printf("change pointer b to m: %p\n", b);
}
