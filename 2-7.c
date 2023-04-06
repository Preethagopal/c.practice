#include <stdio.h>

int main() {
    int arr[10], even[10], odd[10], n, i, j = 0, k = 0;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Put even and odd elements in separate arrays
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("The even elements of the array are: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("The odd elements of the array are: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}