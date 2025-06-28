#include<stdio.h>
int main(){
    int num;
    long fact=1;
    printf("Enter the number to calculate its factorial:\n");
    scanf("%d", &num);
    if (num<0){
        printf("cannot calculate the factorial of negative number!\n");
    } else{
        for( int i=1; i<=num; i++){
            fact *=i;
        }
        printf("the factorial of %d is:%ld\n", num, fact);
    }
    return 0;
}