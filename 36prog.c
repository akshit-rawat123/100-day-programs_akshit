//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;

    printf("HCF of the two numbers = %d", hcf);

    return 0;
}