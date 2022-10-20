#include "main.h"

/**
 * print_numbers - prints the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)

		_putchar(x++ + '0');

	_putchar('\n');
}
