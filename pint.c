#include "monty.h"
/**
 * pintme - print top
 * @stack: double poinyer
 * @line_number: unsigned int
 */
void pintme(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}
