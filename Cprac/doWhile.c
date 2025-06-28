#include<stdio.h>

void DoWhile(int num){
    //scanf("%d", &num);
    do{
        printf("the value of num is:%d\n", num);
        num+=1;
    }while(num<100);
}

    int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);

    printf("this is do while loop:\n");
    DoWhile(a);
    
    return 0;
    }