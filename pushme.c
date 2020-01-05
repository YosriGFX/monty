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
	if (argument != NULL && ifdigit(argument) == 1)
	{
		if (!_push(stack, atoi(argument)))
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		free(argument);
	}
	else
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

}

