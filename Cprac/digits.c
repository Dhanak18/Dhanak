// Wap to calculate number of digits of a number taken from user input

#include<stdio.h>
#include<string.h>
int main(){
    int num, count=0;
    printf("enter the number:");
    scanf("%d", &num);


    char a[100];
    int b= sprintf(a, "%d",num);

    for (int i=0; i<b  ;i++){
        if (i==0 || i<0 || i>0){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}