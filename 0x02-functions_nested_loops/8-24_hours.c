#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 * Description: a function
 * Return: void
 */

void jack_bauer(void)
{
	int minute, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			else if (hours >= 10)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
			}
			if (minute < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minute + '0');
			}
			else if (minute >= 10)
			{
				_putchar(':');
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
