#include "main.h"

/**
 * print_numbers - prints the numbers since 0 up to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)

		putchar(a++ + '0');

	putchar('\n');
}
