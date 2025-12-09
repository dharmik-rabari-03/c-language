#include <stdio.h>

void change(int *num)
{

    *num = 80;
}

int main()
{

    int num = 90;

    change(&num);

    printf("%d", num);

    return 0;
}
