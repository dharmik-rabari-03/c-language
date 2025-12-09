#include <stdio.h>

void Change(int num)
{

    num = 30;
}

int main()
{

    int num = 33;

    Change(num);

    printf("%d", num);

    return 0;
}
