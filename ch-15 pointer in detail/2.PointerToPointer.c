#include <stdio.h>

int main(){

    int num=20;

    int *ptr=&num;

    int **ptr2=&ptr;


    printf("%d==>%p\n",*ptr,ptr);
    printf("%d==>%p\n",**ptr2,ptr2);
    
    
    return 0;
}