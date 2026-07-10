#include <stdio.h>

void main()
{
    int a[20][20], m, n, i, j, flag = 1;

    printf("Enter number of rows    : ");
    scanf("%d", &m);

    printf("Enter number of columns : ");
    scanf("%d", &n);

    if(m != n)
    {
        printf("Matrix is not symmetric");
        return;
    }

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
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");
}