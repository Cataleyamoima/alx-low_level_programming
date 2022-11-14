#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to input
 * Return: on success 1
 * On error, 1 is returned, and is set to appropriate
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
