#include "main.h"

/**
 * print_numbers - print the numbers 0 upto 9
 * Return: void
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');
}
