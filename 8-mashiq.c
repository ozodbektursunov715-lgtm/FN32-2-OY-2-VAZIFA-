#include <stdio.h>

void multiplyArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 4, 0, 7, -6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    multiplyArray(arr, n);
    return 0;
}