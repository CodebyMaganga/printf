#include "main.h"
<<<<<<< HEAD
=======

/************************* PRINT UNSIGNED NUMBER *************************/
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
/**
 * print_unsigned - Prints an unsigned number
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
<<<<<<< HEAD
 * @width: width
 * @precision: Precision specification
 * @size: Size
 * Return: characters printed.
 */
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size)
=======
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */
int print_unsigned(va_list types, char buffer[],int flags, int width, int precision, int size)
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

<<<<<<< HEAD
	num = convert_size_unsgnd(num, size);
=======
	num = convert_size_unsigned(num, size);
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

<<<<<<< HEAD
	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

/**
 * print_octal - Prints an unsigned number in octal notation
 * @types: Lists of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: width
 * @precision: Precision specification
 * @size: Size
 * Return: Number of characters printed
 */
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
=======
	return (print_unsigned(0, buffer + i, flags, width, precision, size));
}

/************* PRINT UNSIGNED NUMBER IN OCTAL  ****************/
/**
 * print_octal - Prints an unsigned number in octal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[],int flags, int width, int precision, int size)
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
{

	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

<<<<<<< HEAD
	num = convert_size_unsgnd(num, size);
=======
	num = convert_size_unsigned(num, size);
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
<<<<<<< HEAD
		num /= 8;
=======
	num /= 8;
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
	}

	if (flags & F_HASH && init_num != 0)
		buffer[i--] = '0';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}

<<<<<<< HEAD
/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: Lists of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: width
 * @precision: Precision specification
 * @size: Size
 * Return: characters printed
 */
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}

/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: width
 * @precision: Precision specification
 * @size: Size
 * Return: characters printed
 */
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
=======
/************** PRINT UNSIGNED NUMBER IN HEXADECIMAL **************/
/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list types, char *buffer,int flags, int width, int precision, int size)
{
	return (print_hexadecimal(types, "0123456789abcdef", buffer,flags, 'x', width, precision, size));
}

/************* PRINT UNSIGNED NUMBER IN UPPER HEXADECIMAL **************/
/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list types, char buffer[],int flags, int width, int precision, int size)
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
<<<<<<< HEAD

/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: List of arguments
=======
/************** PRINT HEXX NUM IN LOWER OR UPPER **************/
/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: Lista of arguments
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: get width
<<<<<<< HEAD
 * @precision: precision
 * @size: Size
 * @size: Size
 * Return: characters printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],
	int flags, char flag_ch, int width, int precision, int size)
=======
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */
int print_hexa(va_list types, char map_to[], char buffer[],int flags, char flag_ch, int width, int precision, int size)
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

<<<<<<< HEAD
	num = convert_size_unsgnd(num, size);
=======
	num = convert_size_unsigned(num, size);
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}

	i++;
<<<<<<< HEAD

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
=======
return (write_unsgnd(0, i, buffer, flags, width, precision, size));
>>>>>>> eb6c5e9652189802fbdda1ff5e6c5369e377cffc
}

