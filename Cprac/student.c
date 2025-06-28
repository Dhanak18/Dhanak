#include <stdio.h>
int main(){
    //char A, B, C, F, grade;
    int marks1, marks2, marks3, rollno;
    printf("Enter the roll number of the student:\n");
    scanf("%d", &rollno);
    printf("Enter the marks of the three subjects:");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    int sum=(marks1+marks2+marks3);
    int avg = sum  / 3;
    printf("%d", avg);
    if (avg>=90){
       printf("the grade is: A");
    } else if (avg>=70){
         printf("the grade is: B");
    } else if (avg>=50){
         printf("the grade is: C");
    }else{
        printf("You have failed!!");
    }
    //printf(" The Roll number of the student is:%d\n The Grade achieved is:%d\n", rollno, grade);
    return 0;
}