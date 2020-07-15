#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Principal
 *
 * @argc: count arguments
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' &&
		*argv[2] != '-' && 
		*argv[2] != '/' &&
	       	*argv[2] != '*' &&
	       	*argv[2] != '%')
		|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (argv[2][0] == '/' || argv[2][0]))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (get_op_func(argv[2])(a, b)));
	return (0);

}
