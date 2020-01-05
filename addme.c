#include "monty.h"
/**
 * addme - add last two top
 * @stack: double poinyer
 * @line_number: unsigned int
 */
void addme(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	if (*stack != NULL)
	{
		if ((*stack)->next != NULL)
		{
			int a;

			a = ((*stack)->next->n + (*stack)->n);
			(*stack)->next->n = a;
			(*stack)->next->prev = NULL;
			popme(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
