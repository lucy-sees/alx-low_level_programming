/*Author: Lucy W. Mwangi ..... Task 6*/
#include "main.h"
/*we call our libraries from our initially created header file, main.h*/

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array of characters
 * Return: 0 (Success)
 **/
void print_chessboard(char (*a)[8]) /*function prototype called from main.h*/
{
	/*declaring variables*/
	int i, j;

	i = 0;
	while (i < 8) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);

			j++;
		}
		_putchar ('\n'); /*print new line*/

		i++; /*add +1*/
	}
}
