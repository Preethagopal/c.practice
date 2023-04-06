#include <stdio.h>

int main() {
    int arr[5], max1, max2, i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    max1 = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max1) {
            max1 = arr[i];
        }
    }
    max2 = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    
    printf("First largest number is: %d\n", max1);
    printf("Second largest number is: %d\n", max2);

    return 0;
}