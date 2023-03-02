#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 */

int main(void)
{
	int counter, overflow;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

<<<<<<< HEAD
	unsigned int former_l, former_r;
	unsigned int latter_l, latter_r;
	unsigned int fib_l, fib_r;
=======
	printf("1");
>>>>>>> 34cf1b5b12787237472801fbf48840a4c7ea73ec

	for (counter = 2; counter < 93; counter++) /* will still print */
	{
<<<<<<< HEAD
		fib = f + l;
		printf("%d : ", i + 4);
		printf("%.0Lf", fib);
		f = l;
		l = fib;
		if (i < target - 1)
			printf("\n");
=======
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
>>>>>>> 34cf1b5b12787237472801fbf48840a4c7ea73ec
	}

	a_head = a / 1000000000; /* break larger num into 2 parts */
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (; counter < 99; counter++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}


	printf("\n");

	return (0);
}
