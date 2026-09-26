//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0;
    int length = 0, maxLength = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if (length > maxLength) {
                maxLength = length;
                start = i - length;
            }
            length = 0;
        }

        i++;
    }

    if (length > maxLength) {
        maxLength = length;
        start = i - length;
    }

    for (i = 0; i < maxLength; i++) {
        longest[i] = str[start + i];
    }

    longest[i] = '\0';

    printf("Longest word = %s", longest);

    return 0;
}