#include <stdio.h>

void main()
{
    int a[20], n, i;
    int largest, second;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element : ");
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);
}