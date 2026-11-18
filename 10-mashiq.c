#include <stdio.h>

int countAboveAverage(int arr[], int n) {
    if (n == 0) return 0;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > average) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 4, 0, 7, -6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Ortachadan katta elementlar soni: %d\n", countAboveAverage(arr, n));
    return 0;
}