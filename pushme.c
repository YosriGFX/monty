#include "monty.h"
/**
 * pushme - push pushes an element to the stack.
 * @stack: double pointer
 * @line_number: line number
 */
void pushme(stack_t **stack, unsigned int line_number)
{
	char *argument = NULL;
	size_t n;

	argument = strtok(NULL, "\n\r\t ");
	if (argument != NULL && ifdigit(argument))
		n = atoi(argument);
	else
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack = NULL;
}
