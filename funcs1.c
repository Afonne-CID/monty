#include "monty.h"

/**
 * _pall - prints the values of a doubly linked list
 * @stack: pointer to the top node (like in a stack)
 * @line_number: the current line number (in the file: monty bytecode)
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}

/**
 * _pint - prints the top value of a doubly linked list
 * @stack: pointer to top node of a doubly linked list 
 * @line_number: the line number (in a file)
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		return (EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->next->n);
}

/**
 * _pop - removes the top value element of a doubly linked list
 * @stack: pointer to the top node of a doubly linked list
 * @line_number: the line number (in a file)
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next = NULL;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		return (EXIT_FAILURE);
	}

	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
		next->prev = *stack;
	(*stack)->next = next;
}

/**
 * _swap - swaps the top (first two) value of a doubly linked list
 * @stack: ponter to the top node of a doubly linked list
 * @line_number: the current line number (in a file)
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		return (EXIT_FAILURE);
	}

	tmp = (*stack)->next->next;
	(*stack)->next->next = tmp->next;
	(*stack)->next->prev = tmp;
	if (tmp->next)
		tmp->next->prev = (*stack)->next;
	tmp->next = (*stack)>next;
	tmp->prev = *stack;
	(*stack)->next = tmp;
}

/**
 * _push - Pushes a value to a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a Monty bytecodes file.
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *new;
	int i;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (EXIT_FAILURE);
	}

	
}
