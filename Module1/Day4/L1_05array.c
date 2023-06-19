#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEvenIndexed += arr[i];
        } else {
            sumOddIndexed += arr[i];
        }
    }
    return sumEvenIndexed - sumOddIndexed;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int difference = calculateDifference(arr, size);
    printf("Difference between the sum of even-indexed and odd-indexed elements: %d\n", difference);

    return 0;
}