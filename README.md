# Absolute diagonal difference algorithms

## 1. diagonal_difference_1

**Step 1** Use two nested loops to iterate on matrix elements. <br>
**Step 2** If counters match add the value at the array index to first diagonal sum. <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; If first counter matches the operation below add the value at the array index to second diagonal sum. <br>
**Step 3** Find the difference between first diagonal and the second diagonal. <br>
**Step 4** Return the absolute value of the difference.

## ALGORITHM <br> diagonal_difference_1(int **a, int size)
	//Computes absolute diagonal difference
	//Input: 2d array of integers, size of the square matrix
	//Output: absolute diagonal differnce of the matrix a

	for i <- 0 to size do
		for j <- to size do
			if (i == j)
				first_diagonal <- first_diagonal + a[i][j]
			if (i == size - j - 1)
				second_diagonal <- second_diagonal + a[i][j]
	
	difference = first_diagonal - second_diagonal
	return abs(difference)

## 2. diagonal_difference_2

**Step 1** Use one loop to iterate on the matrix elements. <br>
**Step 2** Knowing the indices of the first and second diagonal compute sum. <br>
**Step 3** Find the difference between first diagonal and the second diagonal. <br>
**Step 4** Return the absolute value of the difference.

## ALGORITHM <br> diagonal_difference_2(int **a, int size)
	//Computes absolute diagonal difference
	//Input: 2d array of integers, size of the square matrix
	//Output: absolute diagonal differnce of the matrix a

	for i <- 0 to size do
		first_diagonal <- first_diagonal + a[i][i]
		second_diagonal <- second_diagonal + a[size - i - 1][i]
	
	difference = first_diagonal - second_diagonal
	return abs(difference)