#include "monty.h"
/**
 * pintme - print top
 * @stack: double poinyer
 * @line_number: unsigned int
 */
void pintme(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		fprintf(stdout, "%u\n", (*stack)->n);
}
