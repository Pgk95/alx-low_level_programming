#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 * num1 - number one
 * num2 - number two
 * Return: Always success
 */

int main(void)
{
	double num1;
	double num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);
	printf("ANSWER: %lf", num1 + num2);
	return (0);
}
