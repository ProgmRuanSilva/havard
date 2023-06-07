#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_int(char *str) {
  char entry[10];
  
  printf("%s", str);
  fgets(entry, sizeof(entry), stdin);

  int number = atoi(entry);

  return number; 
}
