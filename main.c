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
	_printf("Hello %c\n", 'A');
	_printf("Salut %s\n", "toi");
	_printf("Affiche %%\n");
	_printf("Invalide %d\n", 42);

	return (0);
}
