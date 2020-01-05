#include "monty.h"
/**
 * swapme - swap last two top
 * @stack: double poinyer
 * @line_number: unsigned int
 */
void swapme(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	if (*stack != NULL)
	{
		if ((*stack)->next != NULL)
		{
			int a;

			a = (*stack)->next->n;
			(*stack)->next->n = (*stack)->n;
			(*stack)->n = a;
			return;
		}
		free(*stack);
	}
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
