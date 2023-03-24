#include "main.h"
/**
 * _isupper -  checks for uppercase chars
 *
 *@c: input for character
 *
 * Return: Always 0. 1, if not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
