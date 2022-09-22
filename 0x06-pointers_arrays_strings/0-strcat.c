#include "main.h"

/**
 * _strcat - appends src to dest string
 * @dest: string that src will be appended on
 * @src: string to append on dest
 * Return: address of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
