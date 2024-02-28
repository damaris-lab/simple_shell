i#include "shell.h"

/**
 *main - operates the shell function
 *@argc: arguement count
 *@argv: arguement vector
 */
int main(char *argc, char *argv[])
{
	char *buffer[] = NULL;
	ssize_t count;
	ssize_t nread;
	char *prompt[] = "SHELL$";
	int mode = istatty();

	while (1)
	{
		if (mode == 1)
			write(
