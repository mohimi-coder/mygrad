char    *ft_strdup(char *src) {
  int len = 0;
  int i = 0;
  while (src[len]) {
    len++;
  }
  char *dup = malloc(len + 1);
  while (src[i]) {
    dup[i] = src[i];
    i++;
  }
  dup[i] = '\0';

  return dup;
}
