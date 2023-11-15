#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format - match the conversion printf
 * @p: type char pointer of the specifier
 * @pf: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *p;
	int (*pf)();
} convert;

int _putchar(char c);
int printf_char(va_list valu);
int print_string(va_list valu);
int printf_modulo(void);
int _strlengh(char *cp);
int _strlenghc(const char *cp);
int printf_integer(va_list arg);
int printf_decimal(va_list arg);
int printf_bin(va_list valu);
int printf_uns(va_list arg);
int printf_octal(va_list valu);
int printf_hexa(va_list valu);
int printf_HEXA(va_list valu);
int printf_exSTR(va_list valu);
int printf_p(va_list valu);
int printf_ha(unsigned long int nu);
int printf_sreversion(va_list arg);
<<<<<<< HEAD
int printf_str-rot13(va_list arg);

int printf_HA(unsigned int nu);
=======
int printf_str_rot13(va_list arg);
int printf_integer(va_list arg);
int printf_decimal(va_list arg);
int _strlengh(char *str);
int *_strcopy(char *dest, char *src);
int _strlenghc(const char *f);
>>>>>>> aae37e7023a8d88b2c63e4a08cf9e2413438f1c1
int rev_str(char *f);

int printf_str(va_list valu);
int _printf(const char *format, ...);

#endif
