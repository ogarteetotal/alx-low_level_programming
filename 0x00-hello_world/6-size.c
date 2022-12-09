#include <stdio.h>


/**
 * main - Prints the size of various typesa based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)

{
	char a ;
	int b;
	long int;
	long long in d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float %d byte(s)\n", sizeof(e));
	return (0);
}
