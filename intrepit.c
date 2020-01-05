#include "monty.h"
/**
 * intrepit - Accept and do commnands
 * @opcode: str
 * @line_number: int
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

void intrepit(char *opcode, unsigned int line_number)
{
	size_t i;
	instruction_t Operation[] = {
		{"push", pushme},
		{"pall", pallme},
		{NULL, NULL}
	};
	stack_t **stack = NULL;

	for (i = 0; Operation[i].opcode != NULL; i++)
	{
		if (strcmp(Operation[i].opcode, opcode) == 0)
		{
			Operation[i].f(stack, line_number);
			printf("valid\n");
			return;
		}
	}
	printf("L%u: unknown instruction %s\n",	line_number, opcode);
	exit(EXIT_FAILURE);
}
