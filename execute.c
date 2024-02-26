#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * execute_s - executes the shell commands
 * @args: array of strings
 * @envp: pointer to the string
 * Return:returns -1 on error
 */
int execute_s(char **args, char **envp)
{
	pid_t child_pid;
	int status, val;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("error");
		return (-1);
	}
	if (child_pid == 0)
	{
		int val = execve(args[0], args, NULL);

		if (val == -1)
		{
			perror("exit execve");
			return (-1);
		}
	}
	else
	{
		wait(&status);
	}
	return (1);
}

