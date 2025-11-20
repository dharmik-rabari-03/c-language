

#include <stdio.h>

int main(){

    int num=5;

    int i,j;

    for(i=5;i>=1;i--){
        for(j=i;j<=num;j++){
            printf("%d",i);
        }
        printf("\n");
    }


    return 0;
}