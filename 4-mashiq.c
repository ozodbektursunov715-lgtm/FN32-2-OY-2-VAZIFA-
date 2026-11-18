#include <stdio.h>

void printPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 4, 0, 7, -6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printPositive(arr, n);
    return 0;
}