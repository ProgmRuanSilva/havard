#include <stdio.h>
#include "../include/mylib.h"

int main(void) {
  char age[8];
  char name[8];

  printf("Your Name:");
  fgets(name, sizeof(name), stdin);

  printf("Your Age:");
  fgets(age, sizeof(age), stdin);

  int phone = get_int("What's you Number:");

  printf("---Result---\n Name:%s Age:%s Phone:%i\n", name, age, phone);
}
