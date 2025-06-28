#include <stdio.h>
#include <math.h>
int main(){
    int num, temp, left, ans=0;
    printf("enter a number to check if it's armstrong or not:\n");
    scanf("%d", &num);
    temp=num;
    while (num!= 0){
        left= num%10;
        ans+= pow(left, 3);
        num/=10;
    }
    if (ans==temp){
        printf("%d is an armstrong number.\n", temp);
    } else{
        printf("%d is not an armstrong number.\n", temp);
    }
    return 0;
}