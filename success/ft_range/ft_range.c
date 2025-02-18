#include <stdlib.h>
int     *ft_range(int start, int end)
{
  int i = 0;
  int *tab = malloc(1000000);
  if (start <= end) {
    while (start <= end) 
    {
      tab[i++] = start++;
    }
  } else {
    while (start >= end) 
    {
      tab[i++] = start--;
    }
  }
  return tab;
}

