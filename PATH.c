#include "main.h"

/**
 * handle_path - find the path
 * @command: the command will pass
 * @path: The string that holds the path
 */

void handle_path(char *command, char *path)
{
	char *executable_path;
	char *path_copy = _strdup(path);
	char *path_token = strtok(path_copy, ":");

	while (path_token != NULL)
	{
		executable_path = malloc(sizeof(char) *
				(_strlen(path_token) + _strlen(command) + 2));
		_strcpy(executable_path, path_token);
		_strcat(executable_path, "/");
		_strcat(executable_path, command);

		if (access(executable_path, F_OK) != -1)
		{
			command[0] = '\0';
			_strcat(command, executable_path);
		}
		free(executable_path);
		path_token = strtok(NULL, ":");
	}
	free(path_copy);
}
