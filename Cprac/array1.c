#include<stdio.h>
int main(){
    int arr[]={1,2,4,1,5,6,7,8,2};
    int a= sizeof(arr)/ sizeof(arr[0]);

    int new[10];
    
    int n=0; //for the index of new array

    
    for (int i=0; i<a; i++){
        int repeat=0; 
        for (int j=0; j<n; j++){
            if (arr[i]==new[j]){
                repeat=1;
                break;

            }
        }
            //else if (repeat==0){
              //  new[n]= arr[i];
                //n++;}
        if (repeat==0){
            new[n]=arr[i];
            n++;
        }
    }
    for (int i=0; i<n; i++){
        printf("%d  ", new[i]);
    }

    return 0;
}