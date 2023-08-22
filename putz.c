#include "main.h"

/**
 * putz - print string
 * @c: The character string
 * Return: number of byte
 */

int putz(char *c)
{
	int loop = 0;

	if (c)
	{
		for(loop = 0; c[loop] != '\0'; loop++)
		{
			putchrr(c[loop]);
		}
	}
	return (loop);
}
