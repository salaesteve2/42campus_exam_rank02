#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *s)
{
    int x;
    int nb;
    int sign;

    x = 0;
    nb = 0;
    sign = 0;
    if (s[0] == '-')
    {
        sign = 1;
        x++;
    }
    while(s[x])
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


int	main(int argc, char **argv)
{
	int	first;
	int	second;
	char	oper;
	int	res;

	if (argc == 4)
	{
		oper = argv[2][0];
		first = ft_atoi(argv[1]);
		second = ft_atoi(argv[3]);
		if (oper == '+')
			res = first + second;
		else if (oper == '-')
			res = first - second;
		else if (oper == '*')
			res = first * second;
		else if (oper == '/')
			res = first / second;
		else if (oper == '%')
			res = first % second;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}