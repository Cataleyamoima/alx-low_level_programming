#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to input
 * Return: On success 1
 * On error, 1 is returned, -1 is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
