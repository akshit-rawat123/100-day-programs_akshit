//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main() {
    printf("enter the length\n");
    int l;
    scanf("%d",&l);
     printf("enter the breadth\n");
    int b;
    scanf("%d",&b);
    printf("the area of the rectangle is %d\n",l*b);
    printf("the perimeter of the rectangle is %d\n",2*(l+b));

    
    return 0;
}