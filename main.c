#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("Hello %d!\n", 42);
	len2 = printf("Hello %d!\n", 42);
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

	len1 = _printf("Negative: %d\n", -1234);
	len2 = printf("Negative: %d\n", -1234);
	printf("Lengths: _printf = %d, printf = %d\n\n", len1, len2);

	return (0);
}
