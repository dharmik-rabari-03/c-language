#include <stdio.h>

int main()
{

    int a = 10;

    int *ptr = &a;

    char word = 'a';

    printf(" address of pointer: %u\n", ptr);

    printf("now scalling pointer value :%u\n", ptr + 1);

    printf("address of word:%u\n", word);

    printf("scale address of word:%u\n", word + 1);

    return 0;
}