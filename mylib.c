#include <stdio.h>
#include <stdlib.h>

int get_int(const char *str) {
  int num = 0;
  int i = 0;

  //loop for get numbers
  while (str[i] != '\0') {
    if (str[i] >= '0' && str[i] <= '9') {
        num = num * 10 + (str[i] - '0');
      }
      i++;
  }
    
  return num;
}

