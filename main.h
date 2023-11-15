#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_unsigned(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_HEXA(va_list val);
int print_hexa(va_list val);
int print_oct(va_list val);
int print_binary(va_list val);
int print_revs(va_list args);
int print_rot13(va_list args);
int print_integer(va_list args);
int print_deci(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_37(void);
int print_c(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

