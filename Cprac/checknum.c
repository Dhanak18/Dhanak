#include <stdio.h>
void CheckNum(int num){
    scanf("%d", &num);
    if (num>0){
        printf("%d is a positive number", num);
    } else if (num<0){
        printf("%d is a negative number", num);
    }else{
        printf("The number is a 0!!");
    }
}
int main(){
    int num;
    printf("Enter a number to check:\n");
    CheckNum(num);
    return 0;
}