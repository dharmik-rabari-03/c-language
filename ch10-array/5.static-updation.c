#include <stdio.h>

int main(){

    int num[5] = {10,20,30,40,50};

    num[2]=66;



    for(int i = 0; i <= 4; i++){
        printf("%d\n",num[i]);
    }

    return 0;
}