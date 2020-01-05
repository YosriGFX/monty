#include "monty.h"
/**
 * intrepit - Accept and do commnands
 * @opcode: str
 * @line_number: int
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */
void intrepit(char *opcode, unsigned int line_number)
{
	instruction_t Operation[] = {
		{"push", pushme},
		{"pall", pallme},
		{NULL, NULL}
	};
	char *argument = NULL;
	size_t n = 0;
	argument = strtok(NULL , "\n\r\t ");
	if (argument && ifdigit(argument))
		n = atoi(argument);
	printf("%s L:%i - %zu\n", opcode, line_number, n);

}
