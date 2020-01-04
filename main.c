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
		exit(EXIT_FAILURE);
	}

	FILE *commander;
	commander = fopen(argv[1],"r");
	if (!commander)
	{
		printf("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
