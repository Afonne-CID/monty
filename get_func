#include "monty.h"

/**
 * get_op_func - a function pointer to gets the right fucntion
 * @opcode: an opcode
 *
 * Return: the right function
 */
void (*get_op_func(char *opcode))(stack_t**, unsigned int)
{
	instruction_t op_funcs[] ={
		{"push", _push},
		{"pall", _pall},
		{"pop", _pop},
		{"swap", _swap},
		{"pint", _pint},
		{NULL, NULL}
	};

	int i;

	for (i = 0; op_funcs[i].opcode; i++)
	{
		if (strcmp(opcode, op_funcs[i].opcode) == 0)
			return (op_funcs[i].f);
	}

	return (NULL);
}
