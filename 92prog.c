//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] >= 'a' && str[i] <= 'z') {

            if (count[str[i] - 'a'] == 1) {
                printf("First repeating alphabet = %c", str[i]);
                return 0;
            }

            count[str[i] - 'a']++;
        }

        i++;
    }

    printf("No repeating alphabet");

    return 0;
}