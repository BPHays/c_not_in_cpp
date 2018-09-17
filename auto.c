#include <stdio.h>
#include <stdlib.h>

int main(void) {
  auto p = malloc(sizeof(char *));
  printf("sizeof(p): %zu\n", sizeof(p));

  return 0;
}
