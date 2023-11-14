#include "main.h"

/**
 * _putchar - writes the character car
 * @car: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char car)
{
	return (write(1, &car, 1));
}
