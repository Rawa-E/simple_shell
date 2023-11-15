#include "main.h"

/**
 * main - Entry point
 *
 *
 * Return: 0 (success)
*/

int main(void)
{
	char *command = NULL;
	size_t size;
	char *tokens[MAX_TOKENS];
	char **env;
	int exit_stat;
	int i;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			print_prompt();
		if (getline(&command, &size, stdin) == -1)
		{
			if (feof(stdin))
			{	free(command);
				exit(EXIT_SUCCESS); }
			else
			{	perror("Error");
				exit(EXIT_FAILURE); }
		}
		command[_strcspn(command, "\n")] = '\0';
		tokenize(command, tokens);
		if (tokens[0] != NULL)
		{
			if (_strcmp(tokens[0], "exit") == 0)
			{	free(command);
				for (i = 0; tokens[i] != NULL; i++)
					free(tokens[i]);
				exit(EXIT_SUCCESS); }
			else if (_strcmp(tokens[0], "env") == 0)
			{
				for (env = environ; *env != 0; env++)
					printf("%s\n", *env); }
			else
				exit_stat = execute_command(tokens); }
		for (i = 0; tokens[i] != NULL; i++)
			free(tokens[i]); }
	free(command);
	return (0);
}
