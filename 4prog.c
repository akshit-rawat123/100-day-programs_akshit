//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main() {

    printf("enter the radius\n");
    float r;
    scanf("%f",&r);
     printf("the area of the circle is %f\n",3.14*r*r);
     printf("the circumference of the circle is %f\n",3.14*2*r);

    return 0;
}