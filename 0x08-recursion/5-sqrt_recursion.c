#include "holberton.h"

/**
 * find_root - find square root of n, starting from the smallest possible, 0
 * @n: n
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int find_root(int n, int root)
{
  if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_aux(n, x + 1));
}
