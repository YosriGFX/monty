#include "monty.h"
/**
 * pallme - print all value of stack
 * @stack: double pointer
 * @line_number: line number
 */
void pallme(stack_t **stack, unsigned int line_number)
{
	stack_t *printer = *stack;
	(void)line_number;

	if (*stack == NULL)
		return;
	while (printer)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
	}

}
