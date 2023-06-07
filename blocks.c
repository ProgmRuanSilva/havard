#include <stdio.h>
#include "mylib.h"

int get_int(const char *str);
int get_size(void);
void print_grid(int size);

int main(void)
{
  int n = get_size();
  print_grid(n);
}

int get_size(void)
{
  int n;
  do 
  {
    n = get_int("Size: ");
  } 
  while(n < 1);
  return n;
}

void print_grid(int size)
{
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}
