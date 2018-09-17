struct s {
  int x;
  int y;
  int z;
};

int main(void) {
  /*
   * C allows structure initialization of this form where fields are explicitly
   * assigned by name
   *
   * C++ is working to support this feature in C++20, but currently does not
   * most compilers do support this feature, but with -pedantic warnings will
   * be thrown
   */
  struct s s1 = {
    .x = 1,
    .y = 2
  };

  (void) s1;
  return 0;
}
