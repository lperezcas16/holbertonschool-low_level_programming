#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Principal
 *
 * @ac: count arguments
 * @ag: array
 *
 * Return: Always 0
 */
int main(int ac, char *ag[])
{
	int a;
	int b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*ag[2] != '+' &&
		*ag[2] != '-' &&
		*ag[2] != '/' &&
		*ag[2] != '*' &&
		*ag[2] != '%')
		|| ag[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(ag[1]);
	b = atoi(ag[3]);

	if (b == 0 && (ag[2][0] == '/' || ag[2][0]))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (get_op_func(ag[2])(a, b)));
	return (0);

}
