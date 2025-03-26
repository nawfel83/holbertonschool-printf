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

	while (str[count] != '\0')
	{
		_putchar(str[count]);
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
	long n = va_arg(args, int);
	int count = 0;
	unsigned int num;

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

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	int div = 1;

	while (num / div >= 10)
		div *= 10;

	while (div > 0)
	{
		_putchar((num / diviseur) % 10 + '0');
		div /= 10;
		count++;
	}
	return (count);
}
