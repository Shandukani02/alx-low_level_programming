#include <stdio.h>

/**
 * ain - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	return (ain());
}
