#include <stdio.h>

int main() {
    int arr[10], n, i, j, freq;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency of each element
    for (i = 0; i < n; i++) {
        freq = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                // Set frequency of counted elements to -1 to avoid recounting
                arr[j] = -1;
            }
        }
        if (arr[i] != -1) {
            printf("%d occurs %d times\n", arr[i], freq);
        }
    }

    return 0;
}