#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, maxN = -999999, maxD = 3;

    printf("Enter the number of rows > ");
    scanf("%d", &m);
    printf("Enter the number of cols > ");
    scanf("%d", &n);

    // check  if any one of the matrix is not valid
    if (m <= 0 || n <= 0)
    {
        printf("Not vaild input\n");
        return -2;
    }
    else if (m > 100 || n > 100)   // did a few search and find out that
    {                                // 0x00200000(2MB) is max stack size in my system
        printf("Not vaild input\n"); // objdump -x <program_name.exe> | findstr stack
        return -2;                   // to find out the max stack size
    } // so i guess 100x100 is safe and 700x700 int arr is max stack limit
      // which can't be attained due to other thing also need that

    // vla - https://www.geeksforgeeks.org/cpp/variable-length-arrays-in-c-and-c/
    // if don't known about vla check it out
    int A[m][n], B[m][n], Sum[m][n];

    // read it
    printf("\nMatrix A\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d] > ", i, j);
            scanf("%d", &A[i][j]);
            if (A[i][j] > maxN)
                maxN = (A[i][j] < 0) ? -1 * A[i][j] : A[i][j];
        }
    }
    printf("\nMatrix B\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Matrix[%d][%d] > ", i, j);
            scanf("%d", &B[i][j]);
            if (B[i][j] > maxN)
                maxN = (B[i][j] < 0) ? -1 * B[i][j] : B[i][j];
        }
    }
    if (log(maxN) > maxD) // dynamic bmb
        maxD = log(maxN) + 1;

    // add it
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // print the addtion
    printf("\nSum\n");
    for( int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%*d ", maxD, Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}