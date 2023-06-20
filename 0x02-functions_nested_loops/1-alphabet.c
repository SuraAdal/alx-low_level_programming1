#include <main.h>
/**
* print_alphabets - Prints the alphabet in lowercases'
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
/**
* print_alphabets - Prints the alphabet in lowercases'
* Return: Always 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}
