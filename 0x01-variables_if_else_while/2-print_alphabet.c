#include <stdio.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putcha(lc);
	}
	putcha('\n');
	return (0);
}
