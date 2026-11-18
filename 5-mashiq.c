#include <stdio.h>

int countNegative(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 4, 0, 7, -6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Manfiy sonlar soni: %d\n", countNegative(arr, n));
    return 0;
}