#include "main.h" 

/**
 * print_prompt - display the prompt
 *
 */
void print_prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
