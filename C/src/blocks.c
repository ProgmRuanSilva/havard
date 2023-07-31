#include <stdio.h>
#include "../include/mylib.h"

int get_size(void);
void print_grid(int size);
int get_int(const char *str);

int main(void)
{
  // Get size of grid
  int n = get_size();

  // Print size of grid
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
