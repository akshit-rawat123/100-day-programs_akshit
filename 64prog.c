//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long int n;
    int digit, i;
    int count[10] = {0};
    int maxCount = 0, mostFrequent = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    printf("Digit occurring the most times = %d", mostFrequent);

    return 0;
}