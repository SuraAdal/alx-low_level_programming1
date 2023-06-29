#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/**find the end of the destination string */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	/* concatenate the source string to the destination string */
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* terminate the destination string with a null character */
	dest[i] = '\0';
	/* return a pointer to the resulting string */
	return (dest);
}
