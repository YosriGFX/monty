#include "monty.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: int
 * Return: 1 if c is a digit
 */
int ifdigit(char *argument)
{
size_t a = 0;
for (a = 0; a < strlen(argument); a++)
{
if (argument[a] > '9' && argument[a] < '0')
return (0);
}
return (1);
}
