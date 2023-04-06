#include <stdio.h>

int minJumps(int arr[], int n) {
    int i, jumps = 1, maxReach = arr[0], steps = arr[0];

    if (n == 1) {
        return 0;
    } else if (arr[0] == 0) {
        return -1;
    } else {
        for (i = 1; i < n; i++) {
            if (i == n - 1) {
                return jumps;
            }
            maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i];
            steps--;
            if (steps == 0) {
                jumps++;
                if (i >= maxReach) {
                    return -1;
                }
                steps = maxReach - i;
            }
        }
    }
    return -1;
}

int main() {
    int arr[10], n, i;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int jumps = minJumps(arr, n);
    if (jumps == -1) {
        printf("The end is not reachable\n");
    } else {
        printf("The minimum number of jumps to reach the end of the array starting from index 0 is %d\n", jumps);
    }

    return 0;
}