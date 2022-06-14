#include "main.h"
#include <stdio.h>

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
