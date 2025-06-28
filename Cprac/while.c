#include<stdio.h>
/*void DoWhile(int num){
    //scanf("%d", &num);
    do{
        printf("%d\n", num);
        num+=1;
    }while(num<100); */
}
void While(int num2){
    //scanf("%d", &num2);
    while(num2<=100){
        printf("%d\n", num2);
        num2+=1;
    }
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d", &a);

    printf("this is do while loop:\n");
    DoWhile(a);

    printf("this is while loop:\n");
    While(a); 
    
    return 0;
}