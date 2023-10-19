int ft_atoi(char *s)
{
    int x;
    int nb;
    int sign;

    x = 0;
    nb = 0;
    sign = 0;
    while (s[x] == '\n' || s[x] == '\t' || s[x] == '\v' || s[x] == '\r' || s[x] == '\f')
        x++;
    if (s[x] == '-')
    {
        sign = 1;
        x++;
    }
    else if (s[x] == '+')
        x++;
    while(s[x] && s[x] >= '0' && s[x] <= '9')
    {
        nb = (s[x] - '0') + nb * 10;
        x++;
    }
    if (sign == 1)
    {
        nb = nb * -1;
    }
    return (nb);
}