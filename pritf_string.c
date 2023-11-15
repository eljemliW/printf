#include "main.h"
/**
 * print_string - print a string.
 * @valu: argument.
 * Return: the length of the string.
 */

int print_string(va_list valu)
{
	char *s;
	int j, lenght;

	s = va_arg(valu, char *);
	if (s == NULL)
	{
		s = "(null)";
		lenght = _strlengh(s);
		for (j = 0; j < lenght; j++)
			_putchar(s[j]);
		return (lenght);
	}
	else
	{
		lenght = _strlengh(s);
		for (j = 0; j < lenght; j++)
			_putchar(s[j]);
		return (lenght);
	}
}
