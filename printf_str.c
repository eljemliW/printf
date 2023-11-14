#include "main.h"
/**
 * _strlengh - Returns the lenght of the string.
 * @cp: Type char pointer
 * Return: m.
 */
int _strlengh(char *cp)
{
	int m;

	for (m = 0; cp[m] != 0; m++)
		;
	return (m);

}
/**
 * _strlenghc - Strlenght function 
 * @cp: Type char pointer
 * Return: m
 */
int _strlenghc(const char *cp)
{
	int m;

	for (m = 0; cp[m] != 0; m++)
		;
	return (m);
}
