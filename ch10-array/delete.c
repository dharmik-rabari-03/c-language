
#include <stdio.h>

int main(){

    int num[5] ={10,30,40,50,60};

    int pos = 2;  // deleting element at index 2

    for(int i = pos; i < 4; i++){ 
        num[i] = num[i + 1];
    }

    for(int i = 0; i < 4; i++){
        printf("%d\n",num[i]);
    }

    return 0;
}
