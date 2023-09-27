#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */

void	print_chessboard(char (*a)[8])
{
    int r;
	int c;

	r = 0;
    while (r < 8)
    {
		c = 0;
        while (c < 8)
        {
            _putchar(a[r][c]);
			c++;
        }
        _putchar('\n');
		r++;
    }
}
