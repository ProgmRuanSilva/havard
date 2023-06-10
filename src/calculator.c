#include <stdio.h>
#include "../include/mylib.h"

int main(void) {
 long int x = get_int("x: ");
 long int y = get_int("y: ");

  printf("%li\n", x + y);
}
