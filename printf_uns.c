#include "main.h"
/**
 * printf_uns - print integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int printf_uns(va_list arg)
{
	unsigned int m = va_arg(arg, unsigned int);
	int nu, rest = m % 10, digit, exp = 1;
	int  j = 1;

	m = m / 10;
	nu = m;

	if (rest < 0)
	{
		_putchar('-');
		nu = -nu;
		m = -m;
		rest = -rest;
		j++;
	}
	if (nu > 0)
	{
		while (nu / 10 != 0)
		{
			exp = exp * 10;
			nu = nu / 10;
		}
		nu = m;
		while (exp > 0)
		{
			digit = nu / exp;
			_putchar(digit + '0');
			nu = nu - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(rest + '0');

	return (j);
}
