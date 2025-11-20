#include <stdio.h>


int main(){

    int num=5;

    int i,j;

    for(i=1;i<=num;i++){
        for(j=i;j<=num;j++){
            printf("%d",j);

        }
        printf("\n");
    }


    return 0;
}