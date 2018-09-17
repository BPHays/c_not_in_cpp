#include <cstdio>
#include <cstdlib>

int main(void) {
  auto p = malloc(sizeof(char *));
  printf("sizeof(p): %zu\n", sizeof(p));

  return 0;
}
