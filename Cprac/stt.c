#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char half[100];
    int len;

    printf("enter str:");
    fgets(str, sizeof(str), stdin);
    
    printf("enter the number of characters to copy:");
    scanf("%d", &len);
    strncpy(half, str, len);
    half[len]='\0';

    int a= strlen(str);
    for (int i=0; i<a/2; i++){
        char temp=str[i];
        str[i]=str[a-1-i];
        str[a-1-i]= temp;
    }
    printf("copied string: %s", half);
    printf("reversed string:%s", str);

    return 0;
}