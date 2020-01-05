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
		printf("USAGE: monty file\n");
		fflush(stdout);
		exit(EXIT_FAILURE);
	}

	FILE *commander;
	commander = fopen(argv[1], "r");
	if (!commander)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		fflush(stdout);
		exit(EXIT_FAILURE);
	}

	char *liners = NULL, *opcode = NULL;
	unsigned int line_number = 0;
	size_t n = 0;
	while (getline(&liners, &n, commander) != -1)
	{
		line_number++;
		opcode = strtok(liners, "\n\r\t ");
		if (opcode != NULL && opcode[0] != '#')
		{
			intrepit(opcode, line_number);
		}
	}
	exit(EXIT_SUCCESS);
}
