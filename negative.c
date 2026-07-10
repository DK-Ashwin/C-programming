#include <stdio.h>

void main()
{
    int a[20][20], m, n, i, j;

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

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] < 0)
            {
                a[i][j] = 0;
            }
        }
    }

    printf("Resulting matrix:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
}