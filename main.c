#include "monty.h"
/**
 * main - Monty
 * @argc: int
 * @argv: str
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	FILE *commander;

	commander = fopen(argv[1], "r");
	if (!commander)
	{
		dprintf(STDERR_FILENO,"Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	char *liners = NULL, *opcode = NULL;
	unsigned int line_number = 0;
	size_t n;
	stack_t *stack = malloc(sizeof(stack_t));

	if (!stack)
	{
		dprintf(STDERR_FILENO,"Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	while (getline(&liners, &n, commander) != -1)
	{
		line_number++;
		opcode = strtok(liners, "\n\r\t ");
		if (opcode != NULL && opcode[0] != '#')
		{
			intrepit(opcode, line_number, &stack);
		}
	}
	free(stack);
	fclose(commander);
	exit(EXIT_SUCCESS);
}
