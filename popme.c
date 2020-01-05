#include "monty.h"
/**
 * popme - delete top
 * @stack: double poinyer
 * @line_number: unsigned int
 */
void popme(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *dell = malloc(sizeof(stack_t));

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	dell = (*stack)->next;
	free(*stack);
	(*stack) = dell;
}
