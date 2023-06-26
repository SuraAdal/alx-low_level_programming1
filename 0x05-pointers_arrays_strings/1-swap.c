#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integerto be swapped.
 * @b: The second integer to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
	/*the function tht swaps the values of the twointegers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
