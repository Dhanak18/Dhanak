#include <stdio.h>
int main(){
    printf("the star pattern is as follows:\n");
    for (int i=0; i<=5; i++){
        for (int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}