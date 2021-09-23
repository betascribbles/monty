#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * push - push element into the stack
 * @stack: stack given by main
 * @line_cnt: amount of lines
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_cnt)
{
	char *n = global.argument;

	if ((isdigit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_cnt);
		/*status = EXIT_FAILURE;*/
		exit(EXIT_FAILURE);
		/*return;*/
	}

	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			/*
			 *return;
			 *status = EXIT_FAILURE;
			 */
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			/*
			*return;
			*status = EXIT_FAILURE;
			*/
			exit(EXIT_FAILURE);
		}
	}
}
