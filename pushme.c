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
		stack_t *new = malloc(sizeof(stack_t));

		if (!new)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new->n = atoi(argument);
		new->next = (*stack);
		new->prev = NULL;
		if ((*stack) != NULL)
			(*stack)->prev = new;
		*stack = new;
	}
	else
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

}

