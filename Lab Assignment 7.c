#include <stdio.h>

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, j, temp, swaps;

    // Bubble sort
    for (i = 0; i < n-1; i++) {
        swaps = 0;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
        printf("Index %d: %d swaps\n", i, swaps);
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
