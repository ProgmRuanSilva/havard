#include <stdio.h>
#include <stdlib.h>

int get_int(const  char *str) {
  char entry[32];
  
  printf("%s", str);
  fgets(entry, sizeof(entry), stdin);

  int number = atoi(entry);

  return number; 
}

int get_long(const char *str) {
  char entry[64];

  printf("%s\n", str);
  fgets(entry, sizeof(entry), stdin);

  int number = atoi(entry);

  return number;
}
