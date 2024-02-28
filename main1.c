#include "main.h"

/*
 * main - The main entry function
 *@argc: arguement count
 *@argv: arguement vector
 *Return:
 */
int main(int argc, char **argv[])
{
	char *prompt = "(simpleshell) $";
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t nread;

	(void) argc; (void) argv;

	while (1)
	{
		printf("%s", prompt);
		nread = getline(&lineptr, &n, stdin);
		if (nread == -1)
		{
			printf("exiting  the shell");
			return (-1);
		}
		printf("%s", lineptr);
		free(lineptr);
	}
	return (0);
}



