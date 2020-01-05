#include "monty.h"
/**
 * intrepit - Accept and do commnands
 * @opcode: str
 * @line_number: int
 * @stack : double pointer
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

void intrepit(char *opcode, unsigned int line_number, stack_t **stack)
{
	size_t i;
	instruction_t Operation[] = {
		{"push", pushme},
		{"pall", pallme},
		{"pint", pintme},
		{"pop", popme},
		{"swap", swapme},
		{NULL, NULL}
	};

	for (i = 0; Operation[i].opcode != NULL; i++)
	{
		if (strcmp(Operation[i].opcode, opcode) == 0)
		{
			Operation[i].f(stack, line_number);
			return;
		}
		else if (Operation[i + 1].opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}
}

