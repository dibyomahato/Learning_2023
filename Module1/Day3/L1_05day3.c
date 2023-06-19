#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    if (n <= 0) {
        printf("Not Valid\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        int smallestDigit = 9;
        int largestDigit = 0;

        while (num != 0) {
            int digit = num % 10;
            smallestDigit = (digit < smallestDigit) ? digit : smallestDigit;
            largestDigit = (digit > largestDigit) ? digit : largestDigit;
            num /= 10;
        }

        printf("Smallest Digit in n%d: %d\n", i + 1, smallestDigit);
        printf("Largest Digit in n%d: %d\n", i + 1, largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Enter n%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}