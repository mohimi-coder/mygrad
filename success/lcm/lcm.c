unsigned int    lcm(unsigned int a, unsigned int b) {
  int x = (int)a;
  int y = (int)b;
  int i = 1;

  if (x <= 0 || y <= 0) {
    return 0;
  }
  while (i < 6000000) {
    if ((i % a == 0) && i % b == 0) {
      return i;
    }
    i++;
  }
  return 0;
}
