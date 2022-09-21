#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Entry point
 * @num: the number whose last digit is gotten
 * Return:An integer
 */
int print_last_digit(int num)
{
	int lastdigit;

	if (num == INT_MIN)
		num += 1000;
	if (num < 0)
		num *= -1;
	lastdigit = num % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
