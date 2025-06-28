#include <stdio.h>
int main(){
    int num, a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d %d ", a, b);

    for (int i = 2; i < num; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    return 0;
}
