#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **a, size, i, j;

	printf("Square matrix size: ");
	scanf("%d", &size);

	if (size < 2)
		return (-1);

	a = (int **)malloc(size * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (-2);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = (int *)malloc(size * sizeof(int));
		if (a[i] == NULL)
		{
			for(j = i; j >= 0; j--)
				free(a[i]);
			free(a);
			return (-2);
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			scanf("%d", &a[i][j]);
			if (a[i][j] > 100 || a[i][j] < -100)
				return (-1);
		}
	}

	printf("Algorithm 1\nAbsolute diagonal difference: %u\n", diagonal_difference_1(a, size));
	printf("Algorithm 2\nAbsolute diagonal difference: %u\n", diagonal_difference_2(a, size));

	return (0);
}