#include "main.h"

/**
 * printf_ha - prints an hexadecimal
 * @nu: argument.
 * Return: count.
 */
int printf_ha(unsigned long int nu)
{
	long int j;
	long int *array;
	long int count = 0;
	unsigned long int temp = nu;

	while (nu / 16 != 0)
	{
		nu /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (j = 0; j < count; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[j] + 39;
		_putchar(array[j] + '0');
	}
	free(array);
	return (count);
}

