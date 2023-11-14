#include "main.h"

/**
 * printf_HA - prints an hexadecimal.
 * @nu: number to print.
 * Return: count.
 */
int printf_HA(unsigned int nu)
{
	int j;
	int *array;
	int count = 0;
	unsigned int temp = nu;

	while (nu / 16 != 0)
	{
		nu /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (j = 0; j < count; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[j] + 7;
		_putchar(array[j] + '0');
	}
	free(array);
	return (count);
}

