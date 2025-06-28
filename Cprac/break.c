#include <stdio.h>
void BreakFunction(){
    printf("This is the function demonstrating the break function:\n");
    //int num;
    for(int i=0; i<10; i++){
        if (i==6){
            break;
        }
        printf("%d\n", i);
    }
}

void ContinueFunc(){
    printf ("This is the function demonstrating the continue statement:\n");
    for (int i=0; i<10; i++){
        if (i==6){
            continue;
        }
        printf("%d\n", i);
    }
}

int main(){
    BreakFunction();
    ContinueFunc();

    return 0;
}