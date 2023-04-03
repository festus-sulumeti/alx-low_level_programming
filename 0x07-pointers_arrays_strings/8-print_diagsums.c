#include "main.h"
#include <stdio.h>

/**
* print_diagsums - diagonals in matrix will be displayed
* @a: matrix
* @size: matrix size
*/

void print_diagsums(int *a, int size)
{
	int diagonal_1 = 0;
	int diagonal_2 = 0;
	int row_1, q;

	for (row_1 = 0; row_1 < size; row_1++)
	{
		q = (row_1 * size) + row_1;
		diagonal_1 += a[q];
	}

	for (row_1 = 1; row_1 <= size; row_1++)
	{
		q = (row_1 * size) - row_1;
		diagonal_2 += a[q];
	}

	printf("%d, %d\n", diagonal_1, diagonal_2);

}
