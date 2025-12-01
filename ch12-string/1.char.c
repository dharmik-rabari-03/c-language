#include <stdio.h>

int main()
{

    char letter = 'a';

    printf("%d\n", letter);
    printf("%c\n", letter);

    char num = '5';

    printf("%d\n", num);
    printf("%c\n", num);

    char str[6] = "hello";

    printf("%s\n", str);

    char greeting[] = {'g', 'o', 'o', 'd', ' ', 'm', 'o', 'r', 'n', 'i', 'n', 'g', '\0'};

    printf("%s", greeting);

    return 0;
}