#include "monty.h"
/**
 * _push - adds a new node at the top.
 * @stack: double pointer
 * @n: const int
 * Return: address or null
 */
stack_t *_push(stack_t **stack, const int n)
{
	stack_t *begin = malloc(sizeof(stack_t));
	stack_t *temp = malloc(sizeof(stack_t));

	if (begin == NULL)
		return (NULL);
	begin->n = n;
	begin->prev = NULL;
	begin->next = NULL;
	if (*stack == NULL)
	{
		begin->next = NULL;
		*stack = begin;
		return (*stack);
	}
	temp = *stack;
	begin->next = temp;
	temp->prev = begin;
	*stack = begin;
	return (begin);
}
