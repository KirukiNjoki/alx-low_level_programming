#include <stdio.h>
#include "main.h"
int main (void)
{
	char m;
	int u;

	for (u = 0; u <= 9; u++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
	return (0);
}
