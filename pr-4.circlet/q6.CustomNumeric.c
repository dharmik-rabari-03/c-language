#include <stdio.h>

int main() {
    int i, j, k, space = 16;

    for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){
            printf("%d ", j);
        }

        for(k=1;k<=space;k++){
            printf(" ");
        }

        for(j=i;j>=1;j--){
            printf("%d ", j);
        }

        space -= 4;

        printf("\n");
    }

    return 0;
}
