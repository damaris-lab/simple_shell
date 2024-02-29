#include "main.h"

/**
 * get_path - searches for the command in PATH
 * @envp: environment variables
 *
 * Return: On success, a pointer to the environment
 * variable, otherwise return NULL
 */
char get_path(char **envp)
{
	char *path = NULL;
	int i;

	for (i = 0; envp[i] != NULL; i++)
	{
		if (strstr(envp[i], "PATH"))
		{
			path = (envp[i] + 5);
			break;
		}
	}
	if (path == NULL)
		return (-1);
	return (0);
}
