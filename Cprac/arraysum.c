#include <stdio.h>
int main(){
    int arr[10];
    int a, sum=0;
    printf("enter the size of the array:\n");
    scanf("%d", &a);
    printf("enter %d elements\n", a);
    for (int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<a; i++){
        sum+=arr[i];
    }
    printf("the sum of the elements of the array is: %d\n", sum);
    /*int arr[5]= {5,10,15,20,25};
    for (int i=0; i)*/
    return 0;
} 