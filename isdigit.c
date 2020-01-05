#include "monty.h"
/**
 * ifdigit - function that checks for a digit (0 through 9).
 * @argument: char
 * Return: 1 if argument is a digit
 */
int ifdigit(char *argument)
{
	size_t a = 0;

	for (a = 0; a < strlen(argument); a++)
	{
		if (argument[a] > '9' || argument[a] < '0')
			return (0);
	}
	return (1);
}

