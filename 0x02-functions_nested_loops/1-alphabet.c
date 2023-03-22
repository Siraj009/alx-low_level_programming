#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * This prints lower case alphabets
 */
void print_alphabet(void)/** this function prints lower case alphabets */
	{
		int i = 97;

		while (i <= 122)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
	}
