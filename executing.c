#include "main.h"

/**
 * execute_command - execute the enter command
 * @arr: an array to hlod the command
 * Return: exit_stat
*/

int execute_command(char **arr)
{
	int exit_stat;
	char *path;
	pid_t id;

	id = fork();
	if (id == -1)
	{
		perror("Error forking");
		exit(EXIT_FAILURE);
	}
	else if (id == 0)
	{
		if (_strchr(arr[0], '/') == NULL)
		{
			path = getenv("PATH");
			handle_path(arr[0], path);
		}
		execve(arr[0], arr, environ);
		perror("./hsh");
	}
	else
	{
		waitpid(id, &exit_stat, 0);
		exit_stat = WEXITSTATUS(exit_stat);
	}
	return (exit_stat);
}
