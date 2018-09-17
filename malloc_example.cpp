#include <cstdlib>

int main(void) {
  /*
   * In C malloc calls should not be casted as an undeclared function is
   * assumed to return an int, due to Cs implicit int rules. This means
   * that forgetting an include can lead to truncation if the size of a
   * void * is greater than the size of an int
   */
  char * p = malloc(sizeof(char));

  /* 
   * In C++ the type system doesn't allow implicit casts from void * and
   * therefore an explicit cast must be used. Also you probably shouldn't
   * even be using malloc in C++ or more recently even raw pointers created
   * with new are frowned upon
   */
  char * q = (char *) malloc(sizeof(char));

  (void) p;
  (void) q;
  return 0;
}
