#include <stdio.h>
void TypeCAstFunc(){
    float num;
    printf("Enter a number:");
    scanf("%f", &num);

    int a=10;
    int sum= (int)num+a;

    printf("New number: %d\n", sum);
}
int main() {
    TypeCAstFunc();
}