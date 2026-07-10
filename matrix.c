#include <stdio.h>

int main()
{
    int a[10][10], i, j, r, c;
    int rowsum, colsum;
    int d1 = 0, d2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter the matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow Sum:\n");
    for(i = 0; i < r; i++)
    {
        rowsum = 0;
        for(j = 0; j < c; j++)
        {
            rowsum = rowsum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowsum);
    }

    printf("\nColumn Sum:\n");
    for(j = 0; j < c; j++)
    {
        colsum = 0;
        for(i = 0; i < r; i++)
        {
            colsum = colsum + a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colsum);
    }

    if(r == c)
    {
        for(i = 0; i < r; i++)
        {
            d1 = d1 + a[i][i];
            d2 = d2 + a[i][r - i - 1];
        }

        printf("\nPrincipal Diagonal Sum = %d", d1);
        printf("\nSecondary Diagonal Sum = %d", d2);
    }
    else
    {
        printf("\nDiagonal sum not possible (Matrix is not square)");
    }

    return 0;
}