#include <stdio.h>
#include "../include/mylib.h"

int main(void) {
  int scores[3];

  for (int i = 0; i < 3; i++) {
    scores[i] = get_int("Score: ");
  }
    
  printf("Average: %f\n", (scores[0] + scores[1] + scores[2] / (float) 3)); 
}
