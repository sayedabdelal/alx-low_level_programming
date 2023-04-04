#include "main.h"

/**
 * print_chessboard - watch chess game
 * @a: two dimension array to print.
 */

void print_chessboard(char (*a)[8])
{
	int id, jd;

	for (id = 0; id < 8; id++)
	{
		for (jd = 0; jd < 8; jd++)
		{
			_putchar(a[id][jd]);
		}
		_putchar('\n');
	}
}
