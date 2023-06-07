#include <stdio.h>
#include <stdlib.h>

int get_int(const char *str) {
  char entry[16];
  
  printf("%s", str);
  fgets(entry, sizeof(entry), stdin);

  int number = atoi(entry);

  return number; 
}
