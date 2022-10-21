#include "main.h"

/**
 * _isdigit - checks if the parameter is from 0 to 9
 * @c: input
 * Return 1 if the number is correct
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

