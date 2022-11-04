#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return:  if the number is divisible - 0
 * if the number is not divisible - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

		return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - looks for prime
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (_isitprime(n, n / 2));
}

