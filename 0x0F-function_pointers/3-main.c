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
	int a, b, (*op)(int, int);

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
		exit(100);
	}

	a = atoi(ag[1]);
	b = atoi(ag[3]);

	if (b == 0 && (ag[2][0] == '/' || ag[2][0]))
	{
		printf("Error\n");
		exit(99);
	}
	op = get_op_func(ag[2]);
	printf("%d\n", op(a, b));
	return (0);

}
