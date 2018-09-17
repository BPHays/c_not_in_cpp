enum e {
  one = 1,
  two = 2,
  three = 3
};

int main(void)  {
  /*
   * C allows enums to be assigned arbitrary integral values.
   *
   * C++ requires that enum variables be assigned from named members of the
   * enum.
   */

  enum e e1 = 0;
  enum e e2 = 1;

  (void) e1;
  (void) e2;
  return 0;
}
