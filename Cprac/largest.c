#include <stdio.h>
int main(){
    int a, b, c;
    printf("enter the numbers to find the largest of the three:");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c){
        printf("a is the largest number: %d", a);
    } else if (b>=a && b>=c){
        printf ("b is the largest number: %d", b);
    } else{
        printf("c is the largest number: %d", c);
    }
    return 0;
}