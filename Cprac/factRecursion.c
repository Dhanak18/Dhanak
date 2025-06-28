#include <stdio.h>
int FactbyRecursion(int num){

    if (num==1 || num==0){
        return 1;
    } else {
        return num* FactbyRecursion(num-1);
    }
}

int main(){
    int num;
    printf("Enter the no. to calculate it's factorial.\n");
    scanf("%d", &num);
    printf ("The factorial of %d is: %d\n", num, FactbyRecursion(num));

   return 0;
}