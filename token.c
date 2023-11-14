#include "main.h"

/**
 * tokenize - for the tokenization
 * @input: the string to be tokenize
 * @tokens: an array of pointer to hold the tokenized string
 */

void tokenize(char *input, char **tokens)
{
	char *token;
	int index = 0;

	token = strtok(input, " \t\n\0");
	while (token != NULL && index < MAX_TOKENS)
	{
		tokens[index] = (char *)malloc(_strlen(token) + 1);
		if (tokens[index] == NULL)
		{
			perror("Memory allocation error");
			exit(EXIT_FAILURE);
		}
		_strcpy(tokens[index], token);
		index++;

		token = strtok(NULL, " \t\n\0");
	}
	tokens[index] = NULL;
}
