#include <stdio.h>

int main() {
    int arr[10], n, i;
    int largest, second_largest, smallest, second_smallest;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables
    largest = second_largest = arr[0];
    smallest = second_smallest = arr[0];

    // Find the largest and second largest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Find the smallest and second smallest elements
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);
    printf("The second largest element is: %d\n", second_largest);
    printf("The smallest element is: %d\n", smallest);
    printf("The second smallest element is: %d\n", second_smallest);

    return 0;
}