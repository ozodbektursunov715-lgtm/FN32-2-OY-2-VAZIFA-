#include <stdio.h>

int countLess(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {5, -3, 0, 8, -1, 4, 0, 7, -6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    printf("%d dan kichik elementlar soni: %d\n", x, countLess(arr, n, x));
    return 0;
}