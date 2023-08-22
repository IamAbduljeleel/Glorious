#include "main.h"

/**
 * putchar - Prints value of arguments
 * @c: The character of argument
 * Return: 1
 */

int putchrr(char c)
{
	return (write(1, &c, 1));
}
