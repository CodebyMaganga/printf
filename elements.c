#include "main.h"
/**
 * print_number- prints a no.
 * @args: arguments
 * Return: an integer
 */

int print_number(va_list args)
{
	int n;
	int check;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	check = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}
/**
 * print_unsigned number- prints a no.
 * @n: arguments
 * Return: an integer
 */
int print_unsigned_number(unsigned int n)
{
	int check;
	int len;
	unsigned int num;

	check = 1;
	len = 0;

	num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}


/**
 * p_char- prints a character
 * @args: arguments
 * Return: no of characters printed
 */


int p_char(va_list args)
{
	char value;

	value = va_arg(args, int);
	_putchar(value);
	return (1);
}

/**
 * p_string- prints a string
 * @args: arguments
 * Return: no of characters printed
 */

int p_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * p_percent- prints a %
 * @args: arguments
 * Return: an integer
 */

int p_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_number- prints a no.
 * @args: arguments
 * Return: an integer
 */

int p_integer(va_list args)
{
	int n;

	n = print_number(args);
	return (n);

}
