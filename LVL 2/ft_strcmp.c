#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int x;

    x = 0;
    while (s1[x] && s2[x] && s1[x] == s2[x])
        x++;
    return (s1[x] - s2[x]);
}