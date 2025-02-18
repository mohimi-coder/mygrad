#include <stdlib.h>

char *ft_strncpy(char *s1, const char *s2, int n)
{
    int i = 0;
    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

char **ft_split(const char *str)
{
    int i = 0, j = 0, k = 0;
    char **out = (char **)malloc(sizeof(char *) * 500); 

    if (!out)
        return NULL;

    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        j = i;

        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;

        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * 100);
            if (!out[k])
                return NULL;
            ft_strncpy(out[k], &str[j], (i - j));
            k++;
        }
    }
    out[k] = '\0';
    return out;
}

