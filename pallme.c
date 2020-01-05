#include "monty.h"
/**
 * pallme - print all value of stack
 * @stack: double pointer
 * @line_number: line number
 */
void pallme(stack_t **stack, unsigned int line_number)
{
	if (*head == NULL)
		return;
	
	stack_t *printer = *stack;
	(void)line_number;

	while (printer)
	{
		dprintf(STDERR_FILENO, "%d\n", printer->n);
		printer = printer->next;
	}

}
