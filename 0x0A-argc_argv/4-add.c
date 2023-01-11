#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * main - prints the multiplications of two integers
 * @argc: counts the arguments
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int result = 0, num1, num2;
	char i, j;

	if (argc != 3)
{
	printf("%s\n", "0");
	return (1);
}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 + num2;

	printf("%d\n", result);
	return (0);
}
