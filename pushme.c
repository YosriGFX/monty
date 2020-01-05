#include "monty.h"
/**
 * pushme - push pushes an element to the stack.
 * @stack: double pointer
 * @line_number: line number
 */

void pushme(stack_t **stack, unsigned int line_number)
{
	char *argument = NULL;

	argument = strtok(NULL, "\n\r\t ");
	if (argument != NULL && ifdigit(argument))
	{
		if (!_push(stack, atoi(argument)))
		{
			printf("Error: malloc failed\n");
			fflush(stdout);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("L%u: usage: push integer\n", line_number);
		fflush(stdout);
		exit(EXIT_FAILURE);
	}
	stack = NULL;
}
