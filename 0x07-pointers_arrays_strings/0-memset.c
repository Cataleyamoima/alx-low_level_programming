#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: bytes
 * @n: number of bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
