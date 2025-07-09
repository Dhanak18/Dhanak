// Wap to calculate the average of the elements of an array

#include<stdio.h>
int main(){
    int arr[5];
    float avg=0, sum;

    printf("Enter the 5 elements:");

    for (int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<5; i++){
        sum+=arr[i];
    }
    avg= (sum/5);
    printf("%f\n", avg);
}