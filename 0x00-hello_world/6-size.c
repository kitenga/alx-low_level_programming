#include <stdio.h>
/**
 * main - Program thet prints the size of various types on the
 * computer it's compiled and run on
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/*Declare variables of various datatypes */
	char a;			/* A character variable */
	int b;			/* An integer variable */
	long int c;		/* Along integer variable */
	long long int d;	/* Along long integer variable */
	float f;		/* A floating-point variable */

	/* Print thesize of each data type along with a description */
	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	/* Return 0 to indicate successful program execution */
	return (0);
}
