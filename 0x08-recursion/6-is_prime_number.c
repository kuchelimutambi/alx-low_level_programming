#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: input
 * Return: output
 */

int is_prime_number(int n)
{
	return (is_prime_number_aux(n, 2));
}
