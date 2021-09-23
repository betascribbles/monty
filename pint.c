#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - print the top data
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_cnt)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_cnt);
		exit (EXIT_FAILURE);
		
	}
	printf("%d\n", (*stack)->n);
}
