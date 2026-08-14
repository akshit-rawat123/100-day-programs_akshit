//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("================================\n");
    printf("     TIME CONVERTER PROGRAM\n");
    printf("================================\n");

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("\nConverted Time:\n");
    printf("Hours   : %d\n", hours);
    printf("Minutes : %d\n", minutes);
    printf("Seconds : %d\n", seconds);

    printf("\nTime Format: %d:%d:%d\n", hours, minutes, seconds);

    printf("================================\n");

    return 0;
}