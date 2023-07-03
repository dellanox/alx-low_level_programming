#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c%c", a[i][j], (j != 7) ? ' ' : '\n');
	}
}
