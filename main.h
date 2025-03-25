#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int handle_spec(char format, va_list args);

#endif /* MAIN_H */
