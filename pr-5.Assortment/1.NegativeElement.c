#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("\n%d", &n);

    int a[n];
    printf("enter element :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Negative values: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            printf("%d ,", a[i]);
    }
}
