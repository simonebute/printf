#include "main.h"

/**
* printf_string - prints a string
* @val: the argument
* Return: string lenght
*/

int printf_string(va_list val)

{
	char *str;
	int lenght;
	int i;

	str = va_arg(char, val *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}

