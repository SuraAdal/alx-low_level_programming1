#include "main.h"
/**
 * main - Entry point
 * Discription: 'prints alphabets in lower case
 * print_alphabets - Prints the alphabet in lowercases'
 * Return: Always 0 (Success)
 * */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
