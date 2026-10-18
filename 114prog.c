/*
Q114: Write a program to take a string s as input. The task is to find the
length of the longest substring without repeating characters.
Print the length as output.

Sample Test Cases:

Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k, n;
    int length, maxLength = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);

    for(i = 0; i < n; i++)
    {
        length = 0;

        for(j = i; j < n; j++)
        {
            for(k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    break;
                }
            }

            if(k != j)
            {
                break;
            }

            length++;

            if(length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}