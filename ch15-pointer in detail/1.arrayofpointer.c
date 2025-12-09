#include <stdio.h>

int main(){

    int arr[6]={11,22,33,44,55};

    int *ptr[6];

    for (int i = 0; i <5; i++)
    {
        ptr[i]=&arr[i];
    }
    
    for (int i = 0; i <5; i++)
    {
        printf("%d==>%p\n",*ptr[i],ptr[i]);
    }
    
    
    return 0;

}