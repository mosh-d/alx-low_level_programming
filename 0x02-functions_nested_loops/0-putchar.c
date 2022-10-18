#include <stdio.h>
/**
 * main - program that prints out putchar
 *
 *Return: Always 0.
 */
int main(void)
{
/*First we create an array*/
	char word[] = "_putchar";

	for (int count = 0; count < MAXSTRING; count++)
	{
		putchar(word[count]);
	}
	return (0);
}
