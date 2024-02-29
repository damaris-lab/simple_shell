#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * tokenizer - parses the string provided as input
 * @str: sring to be parsed
 * @delim: delimeter
 * Return: the parsed string
 */
int tokenizer(char *str)
{
	char *token;
	char *delim = " \n:";
	int i;
	char **tokens;
	int size = 0;

	token = strtok(str, delim);
	tokens = malloc(size * sizeof(char *));
	if (tokens == NULL)
		return (-1);
	i = 0;
	while (token != NULL)
	{
		tokens[i++] = strdup(token);
		token = strtok(NULL, delim);
	}
	if (i == 0)
	{
		free(tokens);
		return (1);
	}
	tokens[i] = NULL;
	return (0);
}

