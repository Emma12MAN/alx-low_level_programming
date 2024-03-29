#include "main.h"
#include <stdio.h>
/**
* print_chessboard - prints a chessboard.
* @a: the 2D array of characters representing the chessboard
* This function prints the characters in the 2D array @a as a chessboard.
* Return: void.
*/
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
