/*
 * Author: Kannan
 * Description: Finding sadle point inside a matrix
 * Date: 08/03/2026
*/

#include <stdio.h>


int main()
{
    int m, n;
    int saddle_points = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    int min_row[m];
    int max_col[n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // find smallest in each row
    for (int i = 0; i < m; i++)
    {
        min_row[i] = matrix[i][0];
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] < min_row[i])
                min_row[i] = matrix[i][j];
        }
    }
    // find largest in each col
    for (int j = 0; j < n; j++)
    {
        max_col[j] = matrix[0][j];
        for (int i = 1; i < m; i++)
        {
            if (matrix[i][j] > max_col[j])
                max_col[j] = matrix[i][j];
        }
    }
    // find saddle points: element that is min in its row and max in its col
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == min_row[i] && matrix[i][j] == max_col[j])
            {
                printf("Saddle point found at [%d][%d] = %d\n", i, j, matrix[i][j]);
                saddle_points++;
            }
        }
    }
    if (saddle_points == 0)
        printf("No saddle point found\n");
    return 0;
}