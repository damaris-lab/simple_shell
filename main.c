#include "shell."

/**
  * main - Main entry point for our program
  * @argc: Argument count to the main
  * @argv: Pointer to array of argument values
  *
  * Return: O Always success
  */

int main(int argc, char *argv[])
{
	char *buffer = 0;
	size_t count = 0;
	ssize_t nread;
	char prompt[] = "shell_prompt> ";
	char *str, delim;
	char token;
	int i;
	child_pid, wait;


	while (1)
	{
		write(STDOUT_FILENO, shell_prompt, 9);
		while ((nread = getline(&buffer, &count, stdin)) != -1);
		{
			perror("");
			EXIT(1);
		}

	token = strtok(str, delim);
	int i = 0;

	while (token != NULL)
	{
		str[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	str[i] = NULL ;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("failed to create child process")
			EXIT(-1);
	}
	if (child_pid == 0)
	{
		if (execve(str[0], str, NULL)) != -1)
		{
			perror("failed to execute");
			EXIT(-1);
		}
	}
	else
	{
		wait(&status);
	}
	


