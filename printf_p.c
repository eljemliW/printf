#include "main.h"

/**
 * printf_p - prints an hexadecimal.
 * @valu: argument
 * Return: counter
 */
int printf_p(va_list valu)
{
	void *d;
	char *c = "(null)";
	long int m;
	int n;
	int p;

	d = va_arg(valu, void*);
	if (d == NULL)
	{
		for (p = 0; c[p] != '\0'; p++)
		{
			_putchar(c[p]);
		}
		return (p);
	}

	m = (unsigned long int)d;
	_putchar('0');
	_putchar('x');
	n = printf_ha(m);
	return (n + 2);
}
