#include "main.h"
/**
 * _abs - Entry point
 * @num: the number to be converted
 * Return:An integer
 */
int _abs(int num)
{
	int abs = num * ((num > 0) - (num < 0));

	return (abs);
}
