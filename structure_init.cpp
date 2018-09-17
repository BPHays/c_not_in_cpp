struct s {
  int x;
  int y;
  int z;
};

int main(void) {
  /*
   * C allows structure initialization of this form where fields are explicitly
   * assigned by name
   */
  struct s s1 = {
    .x = 1,
    .y = 2
  };

  (void) s1;
  return 0;
}
