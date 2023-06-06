#include <stdio.h>
#include "mylib.h"

int get_int(const char *str);

int main(void)
{
  const char *str = "a1234";
  int num = get_int(str);

  printf("Número inteiro é: %d\n", num);

}
