#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define instruction_t _instruction_t
#define stack_t _stack_t
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void intrepit(char *opcode, unsigned int line_number, stack_t **stack);
int ifdigit(char *argument);
void pushme(stack_t **stack, unsigned int line_number);
stack_t *_push(stack_t **stack, const int n);
void pallme(stack_t **stack, unsigned int line_number);

#endif
