#include "main.h"

/**
 * handle_error - prints error on stderr
 * @program: The name of the program
 *
 * Return: has no return value
 */
void handle_error(char *program)
{
	char *str_prog = "./hsh: 1: ";
	char *end_str = ": not found\n";

	write(2, str_prog, strlen(str_prog));
	write(2, program, strlen(program));
	write(2, end_str, strlen(end_str));
}
