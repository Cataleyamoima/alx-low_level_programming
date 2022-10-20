#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 up to 9
 *
 * Description - prints the numbers excluding 2 and 4
 *
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
		{
			putchar(x + '0');

		x++;
		}
		putchar('\n');
	}
}
