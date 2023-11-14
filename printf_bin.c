#include "main.h"

/**
 * printf_bin - prints a binary.
 * @valu: argument.
 * Return: 1.
 */
int printf_bin(va_list valu)
{
	int f = 0;
	int co = 0;
	int j, m = 1, n;
	unsigned int nu = va_arg(valu, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((m << (31 - j)) & nu);
		if (p >> (31 - j))
			f = 1;
		if (f)
		{
			n = p >> (31 - j);
			_putchar(n + 48);
			co++;
		}
	}
	if (co == 0)
	{
		co++;
		_putchar('0');
	}
	return (co);
}
