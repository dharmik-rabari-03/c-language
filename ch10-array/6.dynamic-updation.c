#include <stdio.h>


int main(){

    int num[5] = {80,70,60,90,50};

    printf("Enter you fourth element of array:");
    scanf("%d", &num[3]);
 
     for(int i = 0; i <= 4; i++){
        printf("%d\n",num[i]);
    }


    return 0;

}