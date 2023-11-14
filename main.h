#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_PATH_LENGTH 1024
#define MAX_TOKENS 100

extern char **environ;

void print_prompt(void);
int execute_command(char **arr);
void handle_path(char *command, char *path);
void tokenize(char *input, char **tokens);
int _strcmp(char *str1, char *str2);
char *_strdup(char *str);
unsigned int _strlen(char *str);
char *_strcat(char *str1, const char *str2);
char *_strcpy(char *str1, char *str2);
char *_strchr(char *str, char s);
size_t _strcspn(const char *str, const char *r);

#endif
