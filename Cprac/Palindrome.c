#include<stdio.h>
int main(){
    int num, reverse=0;
    printf("enter a number to check if it's a palindrome or not:\n");
    scanf("%d", &num);
    int temp=num;
    /*for (int i=1; i<num)*/
    while (num !=0){
        int left= num%10;
        /*reverse*= 10+left;*/
        reverse= reverse*10 + left;
        num/=10;
    }

    if (temp==reverse){
        printf("%d is a palindrome.\n", temp);
    } else{
        printf("%d is not a palindrome.\n", temp);
    }
    return 0;
}