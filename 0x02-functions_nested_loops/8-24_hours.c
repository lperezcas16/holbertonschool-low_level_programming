#include "holberton.h"

/**
*jack_bauer - Funtion
*
*Return: no return
*/

void jack_bauer(void)
{
	int horas, minutos;

	horas = 0;

	while (horas < 24)
	{
		minutos = 0;
		while (minutos < 60)
		{
			_putchar(horas / 10 + '0');
			_putchar(horas % 10 + '0');
			_putchar(':');
			_putchar(minutos / 10 + '0');
			_putchar(minutos % 10 + '0');
			_putchar('\n');
			minutos++;
		}
		horas++;
	}

}
