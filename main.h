#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>

int execute_s(char **args, char **envp);
void read_input(void);
char tokenizer(char *str);
void handle_error(char *program);
char get_path(char **envp);
void free_argv(char **args);



#endif
