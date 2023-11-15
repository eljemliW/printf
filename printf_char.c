#include "main.h"

/**
 * printf_char - prints a character.
 * @valu: argument.
 * Return: 1.
 */
int printf_char(va_list valu)
{
	char str;

	str = va_arg(valu, int);
	_putchar(str);
	return (1);
}
