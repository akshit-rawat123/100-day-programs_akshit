//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>


int main() {
    
    int a;
    int b;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the 2 number\n");
    scanf("%d",&b);
    printf("the sum of %d and %d is %d \n ",a,b,a+b);
    return 0;
}