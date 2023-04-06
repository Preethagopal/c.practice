#include <stdio.h>

int main() {
    int arr[10], n, i;
    int max_diff, diff;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max_diff variable
    max_diff = arr[1] - arr[0];

    // Find maximum difference between two elements
    for (i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            diff = arr[j] - arr[i];
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
    }

    printf("The maximum difference between two elements in the array is: %d\n", max_diff);

    return 0;
}