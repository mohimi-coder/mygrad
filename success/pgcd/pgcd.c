#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc == 3) {
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
    if (num1 <= 0 || num2 <= 0) {
      return 0;
    }
    while (num1 != num2) {
      if (num1 > num2) {
        num1 -= num2;
      } else {
        num2 -= num1;
      }
    }
      printf("%d", num1); 
  } 
  printf("\n");
  return 0;
}
