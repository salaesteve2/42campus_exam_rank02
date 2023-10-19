#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int number)
{
    char	str[10] = "0123456789";

	if (number > 9)
		ft_putnbr(number / 10);
	write (1, &str[number % 10], 1);
}

int main()
{
    int x;

    x = 0;
    while (x <= 100)
    {
        if (x % 3 != 0 && x % 5 != 0 || x == 0)
            ft_putnbr(x);
        else if (x % 3 == 0 && x % 5 == 0 && x != 0)
            write(1,"fizzbuzz",8);
        else if (x % 3)
            write(1,"fizz",4);
        else if (x % 5)
            write(1,"buzz",4);
        x++;
        write(1,"\n",1);
    }
}