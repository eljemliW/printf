#include "main.h"
/**
 * _printf - is the function that selects the function to print.
 * @format: identifier.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert t[] = {
		{"%s", printf_str}, {"%c", printf_char},
		{"%%", printf_char_37},
		{"%i", printf_integer}, {"%d", printf_decimal}, {"%r", printf_sreversion},
<<<<<<< HEAD
		{"%R", printf_str-rot13}, {"%b", printf_bin}, {"%u", printf_uns},
=======
		{"%r", printf_str_rot13}, {"%b", printf_bin}, {"%u", printf_uns},
>>>>>>> aae37e7023a8d88b2c63e4a08cf9e2413438f1c1
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
			if (t[n].p[0] == format[m] && t[n].p[1] == format[m + 1])
			{
<<<<<<< HEAD
				lenght += t[n].f(arg);
=======
				len += t[n].pf(arg);
>>>>>>> aae37e7023a8d88b2c63e4a08cf9e2413438f1c1
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