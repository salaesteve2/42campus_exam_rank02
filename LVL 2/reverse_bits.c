#include <stdio.h>

unsigned char reverse_bits(unsigned char b)
{
	unsigned char	r = 0;
	int		byte_len = 8;

	while (byte_len > 0)
	{
        r = r * 2;
		if (b % 2)
            r = r + 1;
		b = b / 2;
        byte_len--;
	}
	return (r);
}

int main()
{
    printf("%d",reverse_bits(242));
}