#include "main.h"
/**
 * printf_str-rot13 - printf string to ROT13 
 * @arg: type struct va_arg where printf arguments is allocated
 * Return: count
 *
 */
int printf_str-rot13(va_list arg)
{
	int a, b, count = 0;
	int m = 0;
	char *str = va_arg(arg, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a]; a++)
	{
		m = 0;
		for (b = 0; alpha[b] && !m; b++)
		{
			if (str[a] == alpha[b])
			{
				_putchar(beta[b]);
				count++;
				m = 1;
			}
		}
		if (!m)
		{
			_putchar(str[a]);
			count++;
		}
	}
	return (count);
}
