#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "a..z\n";
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
	putchar(alpha[i]);

	}

	return (0);
}
