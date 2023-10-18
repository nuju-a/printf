#include "main.h"

/**
 *print_binary - function that prints binary argument when passed
 *@args: va_list argument
 *@buffer: for write output
 *
 *Return: number of character printed
 */
int print_binary(va_list args, char buffer[])
{
	unsigned int n, m, i, total;
	unsigned int a[32];
	int counter;

	UNUSED(buffer);

	n = va_arg(args, unsigned int);
	m = 2147483648; /* (2 ^ 31) */
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, total = 0, counter = 0; i < 32; i++)
	{
		total += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			counter++;
		}
	}
	return (counter);
}

