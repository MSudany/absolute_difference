# Absolute diagonal difference algorithms

## 1. diagonal_difference_1

**Step 1** Loop on the first diagonal elements, and sum.
**Step 2** Loop on the second diagonal elements, and sum.
**Step 3** Find the difference between first diagonal and the second diagonal.
**Step 4** Return the absolute value of the difference.

## ALGORITHM diagonal_difference_1(int **a, int size)
	//Computes absolute diagonal difference
	//Input: 2d array of integers, size of the square matrix
	//Output: absolute diagonal differnce of the matrix a
	**for** i <-- 0 **to** size **do**
	first_diagonal <-- first_diagonal + a[i][i]
	**for** i <-- size - 1 **to** 0 **do**
	second_diagonal <-- second_diagonal + a[i][size - i - 1]
	difference = first_diagonal - second_diagonal
	**return** **abs(**difference**)**

## 1. diagonal_difference_2

**Step 1** Use one loop to iterate first and second diagonal elements, and sum.
**Step 2** Find the difference between first diagonal and the second diagonal.
**Step 3** Return the absolute value of the difference.

## ALGORITHM diagonal_difference_2(int **a, int size)
	//Computes absolute diagonal difference
	//Input: 2d array of integers, size of the square matrix
	//Output: absolute diagonal differnce of the matrix a
	**for** i <-- 0 **to** size **do**
	first_diagonal <-- first_diagonal + a[i][i]
	second_diagonal <-- second_diagonal + a[size - i - 1][i]
	difference = first_diagonal - second_diagonal
	**return** **abs(**difference**)**