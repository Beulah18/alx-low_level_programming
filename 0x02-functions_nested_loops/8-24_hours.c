#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return:nothing
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (1)
	{
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		if (a == 2 && b > 3)
			break;
		putchar(a + '0');
		putchar(b + '0');
		putchar(':');
		putchar(c + '0');
		putchar(d + '0');
		d++;
	}
}
