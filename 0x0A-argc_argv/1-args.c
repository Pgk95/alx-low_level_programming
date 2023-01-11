#include <stdio.h>

/*
 * main - print the number of the arguments passed to the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
