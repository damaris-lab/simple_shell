#include "main.h"

/**
 *read_input - reads input from the user on stdin
 * Return:return 0 or -1 on failure
 */
void read_input(void)
{
	char *prompt = "(simpleshell) $";
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t nread;


	while (1)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));
		nread = getline(&lineptr, &n, stdin);
		if (nread == -1)
		{
			perror("exit");
			exit(EXIT_FAILURE);
		}
	}
	free(lineptr);
}
