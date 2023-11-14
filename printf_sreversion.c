#include "main.h"

/**
 * printf_sreversion - function that prints a string reversed
 * @arg: type struct va_arg where printf arguments is allocated
 *
 * Return: the string
 */
int printf_sreversion(va_list arg)
{

	char *str = va_arg(arg, char*);
	int a;
	int b = 0;

	if (str == NULL)
		str = "(null)";
	while (str[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(str[a]);
	return (b);
}
