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

	token = strtok(str, delim);
	 i = 0;

	while (token != NULL)
	{
		token = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	return (0);
}

