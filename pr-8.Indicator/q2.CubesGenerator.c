#include <stdio.h>


void cubeArray(int (*p)[10], int n)
{
    int i, j;

    printf("\nCubes of all elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", p[i][j] * p[i][j] * p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], n, i, j;

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("\nEnter array elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeArray(a, n);

    return 0;
}
