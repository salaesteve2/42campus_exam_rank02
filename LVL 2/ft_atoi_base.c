#include <stdio.h>

int ft_base(char s, int base)
{
    int x;
    char *s1 = "0123456789abcedf";
    char *s2 = "0123456789ABCDEF";

    x = 0;
    while (x < base)
    {
        if (s == s1[x] || s == s2[x])
            return (x);
        x++;
    }
    return (-1);
}

int ft_atoi_base(char *s, int base)
{
    int x;
    int nb;
    int sign;

    x = 0;
    nb = 0;
    sign = 0;
    while (s[x] == ' ' ||  s[x] == '\t' || s[x] == '\v' || s[x] == '\r' || s[x] == '\f')
        x++;
    if (s[x] == '+' || s[x] == '-')
    {
        if (s[x] == '-')
            sign = 1;
        x++;
    }
    while (ft_base(s[x],base) != -1)
    {
        nb = ft_base(s[x],base) + nb * base;
        x++;
    }
    if (sign == 1)
        nb = nb * -1;
    return (nb);
}

int main()
{
    int nb;

    nb = ft_atoi_base("ca", 16);
    printf("%d",nb);
}