/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Case:

Input:
15/04/2025

Output:
15-Apr-2025
*/

#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("%02d-%s-%d", day, months[month - 1], year);

    return 0;
}