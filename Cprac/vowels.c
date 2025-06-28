#include<stdio.h>
#include<string.h>
int main(){
    int vowels=0,consonents=0, n;
    char a[]="aeiouAEIOU";
    char str[100];
    printf("enter a string:");
    scanf("%[^\n]", str);
    n= strlen(str);
    for (int i=0; i<n; i++){
        char ch= str[i];
        if (strchr(a, ch)){
            vowels++;
            }else{
            consonents++;
        }
    }
    printf("vowels: %d", vowels);
    printf("consonents= %d", consonents);
    return 0;
}