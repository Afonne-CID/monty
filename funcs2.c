#include "monty.h"

/**
 * adds - sums the top two values of a doubly linked list
 * @stack: a pointer to the top node of a doubly linked list
 * @line_number: the current line number of the file we are wroking on
 */
void _add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		return (EXIT_FAILURE);
	}

	(*stack)->next->next->n += (*stack)->next->n;
	_pop(stack, line_number);
}
