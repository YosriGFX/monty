#include "monty.h"
/**
 * pallme - print all value of stack
 * @stack: double pointer
 * @line_number: line number
 */
void pallme(stack_t **stack, unsigned int line_number)
{
	stack_t *printer = malloc(sizeof(stack_t));

	if (!printer)
		printf("error line: %u", line_number);
	printer = *stack;
	while (printer->next != NULL)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
	}

}
