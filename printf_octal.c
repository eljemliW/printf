#include "main.h"

/**
 * printf_octal - prints an octal.
 * @valu: argument.
 * Return: count.
 */
int printf_octal(va_list valu)
{
	int j;
	int *array;
	int count = 0;
	unsigned int nu = va_arg(valu, unsigned int);
	unsigned int temp = nu;

	while (nu / 8 != 0)
	{
		nu /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (j = 0; j < count; j++)
	{
		array[j] = temp % 8;
		temp /= 8;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
	}
	free(array);
	return (count);
}
