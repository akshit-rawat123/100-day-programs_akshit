//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int position, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &position);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if (position < 0 || position > n) {
        printf("Invalid position");
    } else {
        for (i = n - 1; i >= position; i--) {
            arr[i + 1] = arr[i];
        }

        arr[position] = element;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}