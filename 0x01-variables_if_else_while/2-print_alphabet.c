#include <stdio.h>
/**
 *main - Entry point of the program
 *Discription: 'alphabets list small only'
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
