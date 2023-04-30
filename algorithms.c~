#include "main.h"
#include <stdlib.h>
#include <math.h>

unsigned int diagonal_difference_1(int **a, int size)
{
	int i, d1 = 0, d2 = 0, diff;

	for (i = 0; i < size; i++)
		d1 += a[i][i];

	for (i = size - 1; i >= 0; i--)
		d2 += a[i][size - i - 1];

	diff = abs(d1 - d2);

	return (diff);
}

unsigned int diagonal_difference_2(int **a, int size)
{
	int i, d1 = 0, d2 = 0, diff;

	for (i = 0; i < size; i++)
	{

		d1 += a[i][i];

		d2 += a[size - i - 1][i];
	}

	diff = abs(d1 - d2);

	return (diff);
}