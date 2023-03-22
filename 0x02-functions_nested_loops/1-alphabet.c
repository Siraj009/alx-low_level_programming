#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)/** print small letter */
	{
		int i = 97;

		while (i <= 122)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
