#include <stdio.h>
int main(){
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d %d", &a, &b);
    printf("before swapping: %d %d", a, b);
    int temp=a;
    a=b;
    b= temp;
    printf("after swapping: %d %d", a, b);
    return 0;
}
