#include <stdio.h>

int main()
{

    int arr[6] = {11, 22, 33, 44, 55};

    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%u =>%d\n", ptr + i, *(ptr + i));
    }

    return 0;
}