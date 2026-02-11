#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, maxN = -999999; // m is row, n is col
	printf("\nEnter the number of rows > ");
	scanf("%d", &m);
	printf("Enter the number of cols > ");
	scanf("%d", &n);
	printf("\n");
	// make matrix and transpose matrix
	int matrix[m][n], Tmatrix[n][m];

	// read from user
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" Matrix[%d][%d] > ", i, j);
			scanf(" %d", &matrix[i][j]);
			if (matrix[i][j] > maxN)
				maxN = (matrix[i][j] < 0) ? -1*matrix[i][j] : matrix[i][j];
		}
	}
	
	int boxSize = (log(maxN)>3) ? log(maxN)+1  : 3; // dynamic bmb also boxsize must be > 3 as we do boxsize - 2 somtimes
	// print it as is
	printf("\nMatrix\n");
	// for loop with v index is only for vish thing it is not core logic i used it mostly everywhere btw
	for (int v = 0; v <= n * boxSize; v++) // v loop 1
	{
		if (v % boxSize == 0)
			printf("+");
		else
			printf("-");
	}
	printf("\n");
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			printf("| %*d", boxSize - 2, matrix[i][j]);
			if (j == n - 1)
				printf("|");
		}
		printf("\n");
		for (int v = 0; v <= n * boxSize; v++) // v loop 2
		{
			if (v % boxSize == 0)
				printf("+");
			else
				printf("-");
		}
		printf("\n");
	}
	// transpose it
	// redo the store loop without scanf and printf
	// making it transpose
	// for eg if arr is of size 2x3
	// sample arr 2x3
	// 		1-2
	// 		3-4
	// 		5-6
	// sample Tarr
	// 		1-3-5
	// 		2-4-6
	// then Tarr will be 3x2
	printf("\n\nTranspose Matrix\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Tmatrix[i][j] = matrix[j][i];
		}
	}

	// print Tarr array
	for (int v = 0; v < m * boxSize; v++) // v loop 3
	{
		if (v % boxSize == 0)
			printf("+");
		else
			printf("-");
	}
	printf("+\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("| %*d", boxSize-2, Tmatrix[i][j]);
			if (j == m - 1)
				printf("|");
		}
		printf("\n");
		for (int v = 0; v <= m * boxSize; v++) // v loop 4
		{
			if (v % boxSize == 0)
				printf("+");
			else
				printf("-");
		}
		printf("\n");
	}
	return 0;
}