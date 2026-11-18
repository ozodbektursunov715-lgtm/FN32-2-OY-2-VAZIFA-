#include <stdio.h>

int countZero(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 4, 0, 7, -6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Nol elementlar soni: %d\n", countZero(arr, n));
    return 0;
}