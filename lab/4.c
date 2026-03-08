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
    // find saddle points
    // find smallest in row and largest in col and then uninon thoese
    for(int i=0; i<m; i++)
    {
        int min = matrix[]
        for(int j=0; j<n; j++)
        {
            
        }
    }
}