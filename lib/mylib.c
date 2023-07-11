#include <stdio.h>
#include <stdlib.h>

typedef char *string;

int get_int(const  char *str) {
  char entry[8];
  
  printf("%s", str);
  fgets(entry, sizeof(entry), stdin);

  int number = atoi(entry);

  return number; 
}

long get_long(const char *str) {
  char entry[8];

  printf("%s", str);
  fgets(entry, sizeof(entry), stdin);

  long int number = atoi(entry);

  return number;
}

float get_float(const char *str) {
  char entry[8];

  printf("%s", str);
  fgets(entry, sizeof(entry), stdin);

  float number = atoi(entry);

  return number;
}
