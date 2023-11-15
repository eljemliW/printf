#include "main.h"
/**
 * printf_integer - prints int
 * @arg: argument to print
 * Return: number of characters printed
 */
int printf_integer(va_list arg)
{
	int n = va_arg(arg, int);
	int nu, rest = n % 10, digit, exp = 1;
	int  j = 1;

	n = n / 10;
	nu = n;

	if (rest < 0)
	{
		_putchar('-');
		nu = -nu;
		n = -n;
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
		nu = n;
		while (exp > 0)
		{
			digit = nu / exp;
			_putchar(digit + '0');
			nu = nu - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}

/**
 * printf_decimal - prints a decimal
 * @arg: argument to print
 * Return: number of characters printed
 */

int printf_decimal(va_list arg)
{
	int n = va_arg(arg, int);
	int nu, rest = n % 10, digit;
	int  j = 1;
	int exp = 1;

	n = n / 10;
	nu = n;

	if (rest < 0)
	{
		_putchar('-');
		nu = -nu;
		n = -n;
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
		nu = n;
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
