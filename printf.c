#include "main.h"
/**
 * _printf - the  function that selects the function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_string}, {"%c", printf_char},
		{"%%", printf_modulo},
		{"%i", printf_integer}, {"%d", printf_decimal}, {"%r", printf_sreversion},
		{"%R", printf_str_rot13}, {"%b", printf_bin},
		{"%u", printf_uns},
		{"%o", printf_octal}, {"%x", printf_hexa}, {"%X", printf_HEXA},
		{"%S", printf_exSTR}, {"%p", printf_p}
	};

	va_list arg;
	int m = 0, n, lenght = 0;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[m] != '\0')
	{
		n = 13;
		while (n >= 0)
		{
			if (p[n].p[0] == format[m] && p[n].p[1] == format[m + 1])
			{
				lenght += p[n].pf(arg);
				m = m + 2;
				goto Here;
			}
			n--;
		}
		_putchar(format[m]);
		lenght++;
		m++;
	}
	va_end(arg);
	return (lenght);
}
