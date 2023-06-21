#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, carry, fib1, fib2, next_fib;

	fib1 = 1;
	fib2 = 2;
	printf("%d, %d", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		next_fib = fib1 + fib2;
		carry = 0;
		if (next_fib > 999999999)
		{
			carry = next_fib / 1000000000;
			next_fib = next_fib % 1000000000;
		}
		if (carry > 0)
		{
			printf(", %d%d%d", carry, (next_fib / 1000000) % 1000,
					(next_fib / 1000) % 1000);
		}
		else if (next_fib > 999999)
		{
			printf(", %d%d", (next_fib / 1000000) % 1000,
					(next_fib / 1000) % 1000);
		}
		else if (next_fib > 0)
		{
			printf(", %d", next_fib);
		}
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}
