#include "main.h"
/**
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
 *
 * Return : void
 */
void jack_bauer(void)
{
	int hour0, hour1;
	int minute0, minute1;

	for (hour0 = 0 ; hour0 <= 2 ; hour0++)
	{
		for (hour1 = 0 ; hour1 < 10 ; hour1++)
		{
			for (minute0 = 0 ; minute0 < 6 ; minute0++)
			{
				for (minute1 = 0 ; minute1 < 10 ; minute1++)
				{
					_putchar('0' + hour0);
					_putchar('0' + hour1);
					_putchar(':');
					_putchar('0' + minute0);
					_putchar('0' + minute1);
					_putchar('\n');
					if (hour0 == 2 && hour1 == 3 && minute0 == 5 && minute1 == 9)
					{
						return;
					}
				}
			}
		}
	}
}

