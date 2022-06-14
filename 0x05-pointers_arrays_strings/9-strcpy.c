#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *
 *  @dest: A pointer to destination of string
 *  @src: A pointer to source string to copy from
 *
 *  Return: pointer to dest
 *   _strcpy - copies the string pointed to by src,
 *   including the terminating null byte, to the
 *   buffer pointed to by dest.
 *   @dest: destination.
 *   @src: source.
 *   Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;
	int count = 0;

	while (*src != '\0')
		*dest++ = *src++;
	return (aux);
	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
