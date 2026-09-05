//Q52: Write a program to print the following pattern:

/**

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j, stars;

    for (i = 1; i <= 4; i++) {

        if (i == 1)
            stars = 1;
        else if (i == 2)
            stars = 3;
        else if (i == 3)
            stars = 5;
        else
            stars = 3;

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        if (i != 4) {
            printf("\n");
        }
    }

    return 0;
}