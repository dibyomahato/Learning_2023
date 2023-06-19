#include <stdio.h>

int calculateDifference(int arr[], int size) {
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    return sumEven - sumOdd;
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
    printf("Difference between the sum of even and odd elements: %d\n", difference);

    return 0;
}