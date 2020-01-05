#include "monty.h"
/**
 * _push - adds a new node at the top.
 * @stack: double pointer
 * @n: const int
 * Return: address or null
 */
stack_t *_push(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	new->n = n;
	new->next = (*stack);
	new->prev = NULL;
	if ((*stack) != NULL)
		(*stack)->prev = new;
	*stack = new;
	return (*stack);
}

