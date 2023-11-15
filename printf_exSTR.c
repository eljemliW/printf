#include "main.h"
/**
 * printf_exSTR - print exclusuives string.
 * @valu: argument.
 * Return:length of the str.
 */

int printf_exSTR(va_list valu)
{
	char *str;
	int j, length = 0;
	int cast;

	str = va_arg(valu, char *);
	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] < 32 || str[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			cast = str[j];
			if (cast < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + printf_HA(cast);
		}
		else
		{
			_putchar(str[j]);
			length++;
		}
	}
	return (length);
}

