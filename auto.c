#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /*
   * In c variables with no type specified are assumed to be ints, this is
   * referred to as an "implicit int" ex:
   *
   * x = 5; // x is an integer
   *
   * In c local variables are also assumed to be placed in automatic storage.
   * If you want static storage for a variable it must be specified. ex:
   *
   * static int s = 5; // s is a static integer
   *
   * However you can choose to be explicit and mark the variable for automatic
   * storage if you so choose. ex:
   *
   * auto int i = 5; // x is an integer
   *
   * Combine these to get
   *
   * auto p = ...// p is a integer
   *
   * Therefore printf prints the size of an integer
   *
   * In C++ auto was removed and reintroduced to signal that the type of a
   * variable should be determined at compile time. This simplifies a lot of
   * templates.
   *
   * auto v = new std::vector<int>();
   *
   * as oposed to 
   *
   * std::vector<int> v = new std::vector<int>();
   *
   * So in C++
   * auto p means that p should determine it's type from the function
   * malloc. which returns a void * making p a void *.
   *
   * Therefore printf prints the size of a void *
   */
  auto p = malloc(sizeof(char *));
  printf("sizeof(p): %zu\n", sizeof(p));

  return 0;
}
