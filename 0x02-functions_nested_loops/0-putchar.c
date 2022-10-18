#include <stdio.h>

/**
 * main - Prints out "_putchar" using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char word[] = "_putchar";

	for (int count = 0; count < MAXSTRING; count++)
	{
		putchar(word[count]);
	}
	return (0);
}
