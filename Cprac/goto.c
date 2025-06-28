#include <stdio.h>
void GotoFunc(){
    for (int i=0; i<5; i++){
        printf("%d ", i);
        for (int j=0; j<5; j++){
            int num;
            printf("%d\n", j);
            printf("Enter a num:\n");
            scanf("%d", &num);
            if (num==0){
                goto end;
            } 
        }
    }
    end:
}

int main(){
    GotoFunc();

    return 0;
}