#include "main.h"

/**
 * print_char - Prints a character
 * @args: Argument list containing the character
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - Prints a string
 * @args: Argument list containing the string
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: Argument list (unused)
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * print_integer - Prints an integer
 * @args: Argument list containing the integer
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num / div > 9)
		div *= 10;

	while (div > 0)
	{
		_putchar(((num / div) % 10) + '0');
		div /= 10;
		count++;
	}
	return (count);
}

/**
 * print_hexadecimal - Prints an unsigned integer in hexadecimal (uppercase)
 * @args: Argument list containing the unsigned integer
 *
 * Return: Number of characters printed
 *
 * Converts an unsigned integer to hexadecimal and prints it in uppercase.
 */
int print_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char hex_chars[] = "0123456789ABCDEF";
	char hex[8];
	int count = 0;
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		hex[i] = hex_chars[n % 16];
		n /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		count++;
	}

	return (count);
}
