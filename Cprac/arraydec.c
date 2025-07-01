#include <stdio.h>
int main(){
    int arr[5]={1,55,23,69,87};
    printf("%d\n", arr[3]);

    int arr_1[5];
    printf("Enter the elements to 1D array:");
    for (int i=0; i<5; i++){  

        scanf("%d", &arr_1[i]);

        printf("%d ", arr_1[i]);
    }
    printf("\n");
    int arr_2[3][3];
    printf("Enter the elemnts to 2D array:\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            
            scanf ("%d", &arr_2[i][j]);
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d  ", arr_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}