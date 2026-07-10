#include <stdio.h>

void main()
{
    int a[20][20], m, n, i, j;
    int rsum, csum, dsum = 0;

    printf("Enter number of rows    : ");
    scanf("%d", &m);

    printf("Enter number of columns : ");
    scanf("%d", &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Enter element : ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow sums:\n");
    for(i = 0; i < m; i++)
    {
        rsum = 0;
        for(j = 0; j < n; j++)
        {
            rsum = rsum + a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rsum);
    }

    printf("\nColumn sums:\n");
    for(j = 0; j < n; j++)
    {
        csum = 0;
        for(i = 0; i < m; i++)
        {
            csum = csum + a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, csum);
    }

    if(m == n)
    {
        for(i = 0; i < m; i++)
        {
            dsum = dsum + a[i][i];
        }
        printf("\nDiagonal sum = %d", dsum);
    }
    else
    {
        printf("\nDiagonal sum not possible (not a square matrix)");
    }
}