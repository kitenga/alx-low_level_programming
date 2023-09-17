#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: print character
 *
 * Return: Always 0 (success)
 * on error, -1 is returned and set 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
