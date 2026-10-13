/*
Q100: Print all sub-strings of a string.

Sample Test Case:

Input:
abc

Output:
a,ab,abc,b,bc,c
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if(i != n - 1 || j != n - 1)
                printf(",");
        }
    }

    return 0;
}