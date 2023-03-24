#include "main.h"
/**
 * _isdigit - cheks for a digit (1 thru 9)
 *
 * @c - interger input for function
 *
 * Return: 1 if interger is found.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
