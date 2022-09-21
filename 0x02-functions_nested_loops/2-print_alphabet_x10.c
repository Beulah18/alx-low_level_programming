#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Return:nothing
 */
void print_alphabet_x10(void)
{
	int alpha;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			 putchar(alpha);
		}
		 putchar('\n');
	}
}
