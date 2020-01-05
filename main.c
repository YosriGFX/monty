#include "monty.h"
/**
 * main - Monty
 * @argc: int
 * @argv: str
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	FILE *commander;
	char *liners = NULL;
	char *opcode;
	size_t n = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	commander = fopen(argv[1], "r");
	if (!commander)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&liners, &n, commander) != -1)
	{
		line_number++;
		opcode = strtok(liners, "\n\r\t ");
		intrepit(opcode, line_number, &stack);
	}
	fclose(commander);
	free(liners);
	free(stack);
	exit(EXIT_SUCCESS);
}

