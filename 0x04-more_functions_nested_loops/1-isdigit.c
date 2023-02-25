#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: tested character
 * Return: 1 if it is, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}

OR 
#include "main.h"

/**
 * _isdigit - checks if characters is digit
 * @c: character to be checked
 *
 * Return: 1 on Success, 0 on Fail
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

