#include "main.h"

/**
 * select_print_func - Selects and calls the appropriate print function
 * @format: The format specifier
 * @args: The argument list
 * Return: Number of characters printed
 */
int select_print_func(char format, va_list args)
{
	int i = 0;
	print_func_t print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	while (print_funcs[i].type != '\0')
	{
		if (print_funcs[i].type == format)
			return (print_funcs[i].print_func(args));
		i++;
	}

	_putchar('%');
	_putchar(format);
	return (2);
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

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			count += select_print_func(*format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}
