#include "monty.h"

/**
 * _tokenizer - tokenizes a string into chunks
 * @str: the string to tokenize
 * @delim: delimeter
 *
 * Return: Double pointer to string (array of arrays)
 */
char *_get_line(char *str)
{
	stack_t *stack = NULL;
	size_t cnt;
	char *next = NULL;
	char *buffer = NULL;
	char **token_holber, *token;
	unsigned int i = 0;
	int j = 0;
	ssize_t get_cnt = 0;
	char *status = NULL;

	int fd = open(str, O_RDONLY);
	if (!fd)
	{
		fprinf(stderr, "Error: Can't open file %s", str);
		return (EXIT_FAILURE);66
	}

	while (get_cnt != -1)
	{
		i++;
		get_cnt = getline(&buffer, &cnt, fd);
		if (get_cnt == -1)
		{
			free(buffer);
			exit(EXIT_FAILURE);
		}
		buffer[cnt - 1] = '\0';
		
		token_holder = malloc((sizeof(char *)) * (get_cnt + 1));
		if (!token_holder)
		{
			fprintf(stderr, "Error: malloc failed");
			return (EXIT_FAILURE);
		}

		token = strtok(buffer, DELIM);
		while (token != NULL)
		{
			token_holder[i] = malloc(_strlen(token) + 1);
			if (token_holder[i] == NULL)
			{
				fprintf(stderr, "Error: malloc failed");
				return (EXIT_FAILURE);
			}

			_strcpy(token_holder[i], token);
			token = strtok(NULL, DELIM);
		}
		while (token_holder[j++])
			;
		if (j > 2)
		{
			fprintf(stderr, "Error: malloc failed");
			return (EXIT_FAILURE);
		}

		get_op_func(token_holder[0])(stack, i);
	}
}
