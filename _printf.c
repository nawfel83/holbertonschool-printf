#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * handle_spec - Handles format specifiers
 * @format: The format specifier
 * @args: The argument list
 * Return: Number of characters printed
 */
int handle_spec(char format, va_list args)
{
	int count = 0;

	if (format == 'c')
		count += _putchar(va_arg(args, int));
	else if (format == 's')
	{
		char *str = va_arg(args, char *);

		if (!str)
			str = "(null)";
		while (*str)
			count += _putchar(*str++);
	}
	else if (format == 'd' || format == 'i')
		count += print_number(va_arg(args, int));
	else if (format == '%')
		count += _putchar('%');
	else
	{
		count += _putchar('%');
		count += _putchar(format);
	}

	return (count);
}

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += handle_spec(*format, args);
		}
		else
			count += _putchar(*format);
		format++;
	}

	va_end(args);
	return (count);
}
