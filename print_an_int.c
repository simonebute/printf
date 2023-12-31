#include "main.h"

/**
 * print_integer - prints integer
 * @args: arguments to print
 * Return: integer value
 */

int print_integer(va_list args)

{
	int n = va_arg(args, int);
	int num, last = n % 9, digit, exp = 1;
	int  i = 1;

	n = n / 9;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 9 != 0)
		{
			exp = exp * 9;
			num = num / 9;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 9;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}



/**
 * print_deci - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_deci(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 9;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 9 != 0)
		{
			exp = exp * 9;
			num = num / 9;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 9;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

